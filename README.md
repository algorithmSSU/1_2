# 💻 Do it! 자료구조와 함께 배우는 알고리즘 입문

# 진행도
|주차|목차|문제|
|:---:|:---:|:---:|
|1주차| 1장,2장 | [BOJ2445](https://www.acmicpc.net/problem/2445), [BOJ1929](https://www.acmicpc.net/problem/1929),[BOJ1924](https://www.acmicpc.net/problem/1924), [BOJ1476](https://www.acmicpc.net/problem/1476)  |
|2주차|3장 스택,큐| [프로그래머스COSPRO1급C++모의고사](https://programmers.co.kr/learn/courses/11114/lessons/70744)|


|이름|1주차|2주차|
|:---:|:---:|:---:|
|최규현|[1장풀이](https://github.com/algorithmSSU/data_struct/tree/master/%EC%B5%9C%EA%B7%9C%ED%98%84/DoitJava_DataStructure/Ch1) <br> [메모](https://github.com/algorithmSSU/data_struct/blob/master/%EC%B5%9C%EA%B7%9C%ED%98%84/1%EC%A3%BC%EC%B0%A8.md)||
|장재우|[1장풀이](https://github.com/algorithmSSU/data_struct/tree/master/%EC%9E%A5%EC%9E%AC%EC%9A%B0/01_Code/01_Code)<br> [1장메모](https://github.com/algorithmSSU/data_struct/blob/master/%EC%9E%A5%EC%9E%AC%EC%9A%B0/01_%EA%B8%B0%EB%B3%B8_%EC%95%8C%EA%B3%A0%EB%A6%AC%EC%A6%98.md) <br> [2장메모](https://github.com/algorithmSSU/data_struct/blob/master/%EC%9E%A5%EC%9E%AC%EC%9A%B0/02_%EA%B8%B0%EB%B3%B8_%EC%9E%90%EB%A3%8C%EA%B5%AC%EC%A1%B0.md)||
|홍예지|[1장풀이](https://github.com/algorithmSSU/data_struct/tree/master/%ED%99%8D%EC%98%88%EC%A7%80/chap_01)<br> [2장풀이](https://github.com/algorithmSSU/data_struct/tree/master/%ED%99%8D%EC%98%88%EC%A7%80/chap_02)<br>[1장메모](https://github.com/algorithmSSU/data_struct/blob/master/%ED%99%8D%EC%98%88%EC%A7%80/chap_01_%EC%9D%B4%EB%A1%A0.md)<br> [2장메모](https://github.com/algorithmSSU/data_struct/blob/master/%ED%99%8D%EC%98%88%EC%A7%80/chap_02_%EC%9D%B4%EB%A1%A0.md)||
|김윤수|[1주차풀이](https://github.com/algorithmSSU/data_struct/blob/master/%EA%B9%80%EC%9C%A4%EC%88%98/1%EC%A3%BC%EC%B0%A8_%EC%8B%A4%EC%8A%B5_%EB%AC%B8%EC%A0%9C.ipynb)<br> [메모](https://github.com/algorithmSSU/data_struct/blob/master/%EA%B9%80%EC%9C%A4%EC%88%98/1%EC%A3%BC%EC%B0%A8_%EA%B9%80%EC%9C%A4%EC%88%98.md)||
# 목차별 정리(명예의 전당)

<details>
<summary>1장(홍예지 정리)</summary>
<div markdown="1">

# 1. 기본 알고리즘

### ✅알고리즘 정의

어떤 문제를 해결하기 위한 절차로, 명확하게 정의되고 순서가 있는 유한 개의 규칙으로 이루어진 집합

### ✅매개변수

메서드를 정의할 때 메서드에 전달되는 값을 저장하기 위해 변수(variable)을 선언하는데, 이를 매개변수 (parameter) 또는 형식 매개변수(formal parameter)라고 합니다.

매개변수를 가인수(임시인수) 라고 하고, 메서드를 호출할 때 사용하는 매개변숫값(value)을 실인수(actual argument)라고 합니다. 간단하게 메서드를 정의할 때는 ‘매개변수’ 메서드를 호출할때는 ‘실인수’라고 생각하면 됩니다.

### ✅함수의 return

c++ 에서는 function 정의 시 return 할 argument의  자료 타입으로 형식이 정해진다.

ex) int function() → return int type

ex) double function() → return double type

ex) void function() → return 0; (아무 값도 반환하지 않음)

### ✅ 조건제어문(분기문)

- **if (조건){ ... };**

해당 조건이 True면 본문 실행

- **elseif(조건){ ... };**

if 문 안에서 if문이 조건과 다른 조건을 비교할 때, 사용

if문과 동일하게 해당 조건이 True면 본문 실행

- **else{ ... };**

if 문 안에서 if문과 조건이 다른 모든 경우에 실행

### ✅ 삼항연산자

C++ 삼항연산자 는 if ~ else 문을 대신하여 사용할 수 있는 연산자를 말합니다.

조건연산자 또는 삼항연산자 라고 불립니다.

**‘조건’ ? ‘A’ : ‘B’**

위와 같은 형태로 사용합니다.

조건이 참이면 A를 반환하고 조건이 거짓이면 B를 반환합니다.

```cpp
int nResult = 0;
int A = 10, B = 20;

nResult = (A < B) ? A : B;
// A<B 가 True 이면 return A, False 이면 False
std::cout << nResult << std::endl;
nResult = (A > B) ? A : B;
std::cout << nResult << std::endl;
```

### ✅ 사전판단반복과 사후판단반복의 차이점

**사전판단 반복문(while / for문)** 

: 처음에 제어식을 평가한 결과가 false 이면 루프 본문은 한 번도 실행되지 않습니다.

**사후판단반복문(do while 문)**

: 루프 본문이 반드시 한 번은 실행됩니다. 

사용자로부터 반드시 정해진 타입(예를 들어 0보다 크고 10보다 작아야 하는 정수)으로 입력을 받고,

프로그램을 실행해야 하는 경우, do-while문을 사용해서 제대로 된 수를 입력받을 때 까지 

반복해서 입력을 받음

### **🔎실습 1C-1**

: 3개의 정숫값을 입력하고 중앙 값을 구하여 출력

 A>B>C → B 위치 값을 출력

**조건1) A≥B**

B>C → return B;

B<C → A>C → return A;

**조건2) A>C**

return A;

**조건3) B>C**

return B;

### **🔎실습 1-14**

: *를 n개를 출력하되, w개마다 줄 바꿈

**1) *를 w개를 출력하면서 n/w번 실행**

(즉 for문에서 *를 w개 출력하는 것을 n/w번 실행)

**2) n/w 실행 후 줄바꿈**

**3) n값을 w로 나눈 나머지를 구하여 변수 temp에 넣고, temp개 출력**

만약 n값을 w로 나눈 나머지가 없다면(딱 떨어진다면) 출력하거나 줄바꿈이 필요하지 않음

</div>
</details>

<details>
<summary>2장(홍예지)</summary>
<div markdown="1">

# 2. 기본 자료구조

### ✅ 배열이란?

배열은 같은 자료형의 변수인 구성 요소(component)가 모인 것입니다.

배열 구성 요소의 자료형은 int 형이나 double 형 어떤 것이든 상관없습니다.

### ✅ 배열의 생성

```cpp
// 정적 할당
int arr_static[5] = {1,2,3,4,5}; // -> stack 할당

// 동적 할당
int* arr_dynamic = new int[5]; // -> heap 할당
```

### ✅ 배열의 크기

c++ 에서는 배열의 크기를 확인 할 때 두가지 경우를 고려해야 한다.

1) 정적 배열

2) 동적 배열

정적배열의 경우 → sizeof(arr_name)/sizeof(arr_type)

동적배열의 경우 → _*msize(arrname)/sizeof(arr_type)*

### ✅ rand() 함수사용

```cpp
#include <iostrea>
#include <random>

int main(){
	int num;
	int num_range= 100;
	num= rand() % num_range;

	// rand() % 100 : 0~100사이의 숫자 랜덤으로 추출
}
```

### ✅ 클래스란?

클래스는 서로 다른 여러 데이터형을 자유로이 조합하여 만들 수 있는 자료구조 입니다.

</div>
</details>
