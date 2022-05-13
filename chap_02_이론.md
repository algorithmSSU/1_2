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