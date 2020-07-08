### requests

https://requests.readthedocs.io/en/master/

* 파이썬에서 요청을 만드는 기능을 모아 놓은 모듈

### BeautifulSoup

https://pypi.org/project/beautifulsoup4/

* html에서 데이터를 추출할 수 있도록 도와주는 모듈



#### main.py

```python
from indeed import extract_indeed_pages,extract_indeed_jobs

last_indeed_page=extract_indeed_pages()
extract_indeed_jobs(last_indeed_page)
```

#### indeed.py

```python
import requests
from bs4 import BeautifulSoup

LIMIT=50
URL=f"https://www.indeed.com/jobs?q=python&limit={LIMIT}"

def extract_indeed_pages():

  result=requests.get(URL)

  soup=BeautifulSoup(result.text,"html.parser")

  pagination=soup.find("div",{"class":"pagination"})
  pages=pagination.find_all('a')
  spans=[]
  for page in pages[:-1]:
    #spans.append(page.find("span").string)
    spans.append(int(page.string))

  max_page=spans[-1]
  return max_page

def extract_indeed_jobs(last_page):
  jobs=[]
  #for page in range(last_page):
  result=requests.get(f"{URL}&start={0*LIMIT}")
  soup=BeautifulSoup(result.text,"html.parser")
  results=soup.find_all("div",{"class":"jobsearch-SerpJobCard"})
  for result in results:
    title=result.find("h2",{"class":"title"}).find("a")["title"]
    print(title)
  return jobs
```

