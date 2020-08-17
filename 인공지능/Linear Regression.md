## Linear Regression
### Linear Regression(선형 회귀)이란?

[Linear Regression 참고](http://hleecaster.com/ml-linear-regression-concept/)

2차원 좌표에 분포된 데이터를 1차원 직선 방정식을 통해 표현되지 않은 데이터를 예측하기 위한 **분석 모델**

**머신 러닝**은 실제 데이터를 바탕으로 **모델**을 생성해서 만약 다른 입력 값을 넣었을 때 발생할 아웃풋을 예측함

이 때 찾아낼 수 있는 가장 직관적이고 간단한 **모델**은 **선(line)**이다. 그래서 주어진 데이터들을 대표하는 하나의 적합한 선을 찾는 것을 **Linear Regression**이라고 한다.

ex) 여러 사람들의 키와 몸무게 데이터를 학습시키고 특정 인의 키 데이터로 몸무게를 예측



![img](https://i0.wp.com/hleecaster.com/wp-content/uploads/2019/12/linear01.jpg?w=1200)

### Hypothesis이란?

Linear Regression에서 사용하는 1차원 방정식을 가리키는 용어

`H(x) = Wx + b`

좌표 평면에서 직선은 기울기(weight)와 bias를 갖는 함수로 표현할 수 있다. 



![img](https://t1.daumcdn.net/cfile/tistory/2669EA3E5790FD3317)

노란색, 빨간색, 파란색 직선이 모두 다른 W, b 값을 가진다. 직선들 가운데 주어진 데이터를 가장 잘 표현한 파란색 직선이 최상의 직선이다.



