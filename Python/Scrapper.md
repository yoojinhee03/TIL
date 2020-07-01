### requests

https://requests.readthedocs.io/en/master/

* 파이썬에서 요청을 만드는 기능을 모아 놓은 모듈

```python
import requests

URL="https://www.indeed.com/jobs?q=python&limit=50"
result=requests.get(URL)
print(result.status_code)
```



### BeautifulSoup

https://pypi.org/project/beautifulsoup4/

* html에서 데이터를 추출할 수 있도록 도와주는 모듈

```python
import requests
from bs4 import BeautifulSoup

URL="https://www.indeed.com/jobs?q=python&limit=50"
result=requests.get(URL)

soup=BeautifulSoup(result.text,"html.parser")
pagination=soup.find("div",{"class":"pagination"})
pages=pagination.find_all('a')
spans=[]

for page in pages:
  spans.append(page.find("span"))

spans=spans[:-1]
print(spans)
```

#### 