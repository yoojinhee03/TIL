## 자식요소의 float이 부모의 height에 영향을 줄때

```css
.parent:after{ 
	content:""; 
	clear:both; 
	display:block; 
}
```

```css
.parent{ 
	overflow:hidden;
}
```
