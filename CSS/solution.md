### margin

#### 자식 div의 margin-top이 부모 div에 영향을  줄때

```css
.parent{
    overflow:auto;
}
.child{
    margin-top:20px;
}
```

```css
.parent{
    border:1px;
}
.child{
    margin-top:20px;
}
```

```css
.parent{
    padding-top:20px;
}
```

### div

#### 자식 div를 가운데 정렬하고 싶을때

```css
.parent{
	text-align: center;
}
.child{
    display: inline-block;
}
```

#### div 안의 div 세로 가운데 정렬하고 싶을때

```css
.parent{
	position: relative;
}
.child{
    position: absolute;
    top:50%;
	transform: translateY(-50%);
}
```



### float

#### 자식요소의 float이 부모의 height에 영향을 줄때

```css
.parent:after{ 
	content:""; 
	clear:both; 
	display:block; 
}
```

