# width 및 height가 변해도 border-radius 외곽 유지하기

```css
div{
    border-radius:max(0px, min(8px, calc((100vw - 4px - 100%) * 9999))) / 8px;
}
```

todo