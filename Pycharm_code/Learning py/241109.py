import requests

url = "https://www.huoshen80.top"
header = {"User-Agent":'Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/86.0.4240.183 Safari/537.36'}
repounse = requests.get(url,headers=header)
content = repounse.content.decode('utf-8')