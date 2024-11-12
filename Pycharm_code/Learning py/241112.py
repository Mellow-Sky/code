from flask import Flask, send_file, request
import os
import random
import ssl
from pathlib import Path

app = Flask(__name__)

# 配置图片目录路径
IMAGE_DIR = "D:\枍\Pictures\Saved Pictures"

# HTTPS配置
SSL_CERT = "cert.pem"  # SSL证书路径
SSL_KEY = "key.pem"  # SSL私钥路径


def create_ssl_context():
    """创建SSL上下文"""
    context = ssl.SSLContext(ssl.PROTOCOL_TLS_SERVER)
    context.load_cert_chain(SSL_CERT, SSL_KEY)
    return context


# 文件协议处理
def get_file_url(filepath):
    """转换为file://协议URL"""
    absolute_path = os.path.abspath(filepath)
    return f"file://{absolute_path}"


@app.route('/random-image')
def random_image():
    """返回随机图片，支持protocol参数"""
    try:
        image_files = [f for f in Path(IMAGE_DIR).glob("**/*")
                       if f.suffix.lower() in {'.jpg', '.jpeg', '.png', '.gif'}]

        if not image_files:
            return "No images found", 404

        random_image_path = random.choice(image_files)

        # 检查请求的协议类型
        protocol = request.args.get('protocol', 'http')

        if protocol == 'file':
            # 返回file://协议的URL
            return {"url": get_file_url(random_image_path)}
        else:
            # 默认返回图片文件
            return send_file(random_image_path, mimetype='image/jpeg')

    except Exception as e:
        return str(e), 500


if __name__ == '__main__':
    if not os.path.exists(IMAGE_DIR):
        os.makedirs(IMAGE_DIR)

    # 使用HTTPS运行
    context = create_ssl_context()
    app.run(host='0.0.0.0', port=443, ssl_context=context, debug=True)