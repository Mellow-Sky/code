import requests
from bs4 import BeautifulSoup

# 输入您自己网站的URL
url = "https://huoshen80.top"

# 发送HTTP请求并获取网页内容
response = requests.get(url)
html_content = response.content

# 使用BeautifulSoup解析HTML
soup = BeautifulSoup(html_content, 'html.parser')

# 提取感兴趣的数据
title = soup.title.string
headings = [h.text for h in soup.find_all(['h1', 'h2', 'h3'])]
links = [link.get('href') for link in soup.find_all('a')]

# 输出结果
print(f"网页标题: {title}")
print("主要标题:")
for heading in headings:
    print(f"- {heading}")
print("链接:")
for link in links:
    print(f"- {link}")