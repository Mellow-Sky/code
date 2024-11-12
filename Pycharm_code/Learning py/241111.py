import requests

url = "https://huoshen80.top/api/cg"
payload = {
    "title": "foo",
    "body": "bar",
    "userId": 1
}

# 发送 POST 请求
response = requests.post(url, json=payload)

# 检查响应状态
if response.status_code == 201:
    data = response.json()  # 将响应内容解析为 JSON 格式
    print("Created post ID:", data["id"])
else:
    print("Failed to create post:", response.status_code)
