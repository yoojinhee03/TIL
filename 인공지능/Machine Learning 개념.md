## Machine Learning 개념

### Machine Learning 이란?

- 컴퓨터가 학습할 수 있도록 하는 알고리즘과 기술을 개발하는 분야

- 어떠한 데이터를 분류하거나 값을 예측하는 것

## Supervised/Unsupervised/Reinforcement Learning

### 1. Supervised Learning(지도 학습)

* 정답을 알려주며 학습시키는 것(learning with labeled examples)
* ex ) 고양이 사진을 주고(input data), 이 사진은 고양이(정답지 - label data)야. 라고 알려주는 학습 방식

* **classification**(분류) / **regression**(회귀)

#### Most common problem type in ML

- Image labeling
- Email spam filter
- Predicting exam score

#### 1-1) classification(분류)

- binary classification(이진 분류)
  - 어떤 데이터에 대해 **두 가지 중 하나로 분류**할 수 있는 것
  - ex ) 이것은 동물이야? 예 / 아니오
- multi-label classification(다중 분류)
  - 어떤 데이터에 대해 **여러 값 중 하나로 분류**할 수 있는 것
  - ex ) 이 동물은 어떤 동물이야? 고양이 / 개 / 늑대 ...

#### 1-2) regression(회귀)

- 어떤 데이터들의 특징을 토대로 값을 예측하는 것

- ex ) 어디 동네에 집 값은 어느 정도야? / 신림역에 얼마, 서울역에 얼마



### 2. Unsupervised Learning(비지도 학습)

정답을 따로 알려주지 않고(label X), 비슷한 데이터들을 군집화 하는 것(un-labeled data)

ex ) 빨간색인 과일을 한 분류로, 노란색인 과일을 한 분류로 묶음

