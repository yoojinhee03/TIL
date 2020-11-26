## div 안의 div를 세로 가운데 정렬하고 싶을때

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

