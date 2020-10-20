# datatables_ajax를 이용해서 검색하기

```html
<select name="searchProd" id="searchProd">
    <option value="001">책상</option>
    <option value="002">의자</option>
    <option value="003">시계</option>
</select>
```

```javascript
$("#table").DataTable({
    "lengthChange": false,
    "serverSide": true,
    "processing": true,
    "ajax": {
        "url": "이동할 url",
        "type": "POST",
        "data" : function ( d ) {
            d.searchProd = $("#searchProd").val();
        },
        "dataSrc": function(res) {
            var data = res.data;
            return data;
        }
	},
    	.
        .
        .
});
```

핵심코드는 아래와 같다.

```javascript
"data" : function ( d ) {
    d.searchProd = $("#searchProd").val();
},
```

"data"에 function(d)를 이용해서 post로 보낼 data값들을 `d.searchProd = $("#searchProd").val();`와 같은 방식으로 담는다.



```javascript
$("#searchProd").change(function () {
    $("#table").DataTable().ajax.reload();
});
```

select box가 클릭될 때마다 datatable이 reload 되어 post방식으로 서버에 전송한다. enter를 눌러서, 버튼을 눌러서 등등 검색하는 방식은 다양하므로 그에 맞게 코드를 작성하고 함수 안에 `$("#table").DataTable().ajax.reload();` 이 한줄만 추가하면 된다.



데이터는 controller에서 `@RequestParam(value="searchProd")String searchProd`로 받아서 searchProd를 쿼리문으로 보내면 된다. 쿼리문은 아래와 같다.

```sql
select * from product where prodcd=#{searchProd}
```

쿼리문 또한 like, concat 등등을 사용해서 검색하는 방식에 맞게 쿼리문을 작성하면 된다.



결과적으로 위 코드를 실행시켰을 때, select box를 클릭시 선택한 데이터가 검색되는 것을 확인할 수 있을 것이다.

## Reference

https://m.blog.naver.com/PostView.nhn?blogId=eyenein12&logNo=220323961369&proxyReferer=https:%2F%2Fwww.google.com%2F

