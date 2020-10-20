# datatables_datatables UI에서 데이터 변경하기

```javascript
   "columns" : [
       {"data": "name"},
       {"data": "age"},
       .
       .
       .
       {"data": "check",
        "render": function (data) {
            switch(data){
                case "not ok": return "X"; break;
                case "ok": return "O"; break;
                default: return data;
            }
        }  
       }
   ]
```

## Reference

https://stackoverrun.com/ko/q/11550683