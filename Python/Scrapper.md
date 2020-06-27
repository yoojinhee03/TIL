### requests

https://requests.readthedocs.io/en/master/

* 파이썬에서 요청을 만드는 기능을 모아 놓은 모듈

```python
import requests

URL="https://www.indeed.com/jobs?q=python&limit=50"
result=requests.get(URL)
print(result.status_code)
```