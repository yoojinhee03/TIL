### 1. 웹뷰 띄우기

```java
private WebView mWebView;
private WebSettings mWebSettings;
private final String url="https://www.naver.com/";

mWebView.setWebViewClient(new WebViewClient());//클릭시 새창 안뜨게
mWebSettings=mWebView.getSettings();//세부 세팅 등록
mWebSettings.setJavaScriptEnabled(true);//자바스크립트 허용 여부
mWebSettings.setSupportMultipleWindows(false);//새창 띄우기 허용 여부
mWebSettings.setJavaScriptCanOpenWindowsAutomatically(false);//자바스크립트 새창 띄우기 허용 여부
mWebSettings.setLoadWithOverviewMode(true);//메타태그 허용 여부
mWebSettings.setUseWideViewPort(true);//화면 사이즈 맞추기 허용 여부
mWebSettings.setSupportZoom(false);//화면 줌 허용 여부
mWebSettings.setBuiltInZoomControls(false);
mWebSettings.setLayoutAlgorithm(WebSettings.LayoutAlgorithm.SINGLE_COLUMN);//컨텐츠 사이즈 맞추기
mWebSettings.setCacheMode(WebSettings.LOAD_NO_CACHE);//브라우저 캐시 허용 여부
mWebSettings.setDomStorageEnabled(true);//로컬저장소 허용 여부

mWebView.loadUrl(url);//웹뷰에 표시할 웹사이트 주소, 웹뷰 시작
```



### 2. 퍼미션 설정하기

안드로이드 앱에서 인터넷에 접속할 수 있도록 허용하기 위해서는`AndroidManifest.xml ` 에서 `android.permission.INTERNET` 설정을 추가해야한다.

```xml
<!-- 인터넷 관련 퍼미션--> 
<uses-permission android:name="android.permission.INTERNET" />
```



안드로이드에서 기본적으로 http 접근을 허용하지 않기 때문에 http로 접근을 해야 한다면 예외처리를 해야한다.

```xml
<application
             android:usesCleartextTraffic="true"
             ...
</application>
```



### 3. 안드로이드와 웹뷰 연동하기

```java
private final String ENTRY_URL="웹뷰 URL";

mWebView.setWebViewClient(new WebViewClient() {
    @Override
    public void onPageFinished(WebView view, String url) {
        //WebView의 데이터를 가져오는 작업을 한다.
        if (url.equals(ENTRY_URL)) {
            String script = "javascript:function afterLoad() {"
                + "document.forms[0].setAttribute('onsubmit',
                + 'window.test.setLoginInfo(elements[0].value, elements[1].value); "
                + "return true;');"
                + "};"
                + "afterLoad();";
            view.loadUrl(script);
        }
    }
});

mWebView.addJavascriptInterface(new Object() {
    @JavascriptInterface
    public void setLoginInfo(String id,String password) {
        Toast.makeText(LoginActivity.this, "id ::: " + id+", password ::: "+password, Toast.LENGTH_LONG).show();
    }
}, "test");
```

```html
<form method="post" action="로그인 처리할 페이지">             
    <input id="uid" type="text" value=""/>
    <input id="pwd" type="password" value="" />
    <button type="submit"</button>
</form>
```

웹뷰에서 입력한 id와 password가 Toast 메세지로 띄워진다.

