# 6. 정렬

# 1. 버블 정렬 → 두 개씩 n번 비교, swap

## O(N^2)

**바로 옆에 있는 거랑 비교해서 n개를 swap**
이 방식으로 n번 해주는 방법

```cpp
void bubblesort(int a[],int size){

    for (int i = 0; i < size; i++){
        for (int j = 0; j < size - 1;j++){
            if(a[j]>a[j+1]){
                swap(a, j, j + 1);
            }
        }
    }
};
```

# 2. 선택 정렬 → 최소 값과 swap

## O(N^2)

**가장 작은 요소를 맨 앞으로 이동하는 식으로 정렬을 진행**

전체 요소가 n개 있다면, n번 연산을 수행

0번째를 기준으로 1번째~6번째 중 가장 작은 값을 찾아서,

0번째와 가장 작은 값 swap

**→ 각 index를 기준으로 index 이후에 가장 작은 값을 가지는 index의 값과 swap해준다.**

같은 방식으로 5번째(끝까지) 연산을 수행한다. 

(마지막 6번째 자리에는 이미 배열에서 가장 큰 값이 위치해 있을 것이므로)

![Untitled](https://s3-us-west-2.amazonaws.com/secure.notion-static.com/a9a63407-316e-4335-891b-f902f8f2ef5d/Untitled.png)

```cpp
void selectionsort(int a[], int size){
    int min, index;
    for (int i = 0; i < size; i++){
        min = a[i];
        for (int j = i + 1; j < size; j++){
            if(min>a[j]){
                min = a[j];
                index = j;
                swap(a,i, index);
            }
        }
    }
};
```

# 3. 삽입 정렬 → 왼쪽 값과 계속 비교 후 저장

## O(N^2)

**왼쪽 부터 정렬된 상태로 만들어주는 것**

→ **바로 오른쪽 값과 왼쪽 값(여러개 있으면 인덱스0번까지) 을 비교하여 적당한 위치에 삽입한다.**

**삽입정렬의 경우 일부 정렬이 되어 있는 상태에서 굉장히 빠르다.**

i번째 있는 값 왼쪽 값들을 모두 방문하면서

i번째 있는 값을 어디에다 저장해야 하는지 체크한다.

이방식으로 i=1부터  n-1번째 까지 i 왼쪽에 있는 값과 비교해서

i 왼쪽에 있는 값의 갯수만큼 i위치 값과 비교하면서 제대로 위치했는 지 체크한다.

이렇게 한다면,

"i번째 왼쪽 값들은 모두 정렬이 되어 있는 상태로 유지"

정렬이 완료 된 비율을 늘려주는 방식이다.

하지만 이 또한 n개를 모두 돌면서 i 앞의 n개를 확인해주어야 하기 때문에

n*(n-i) = O(N^2) 시간복잡도를 가진다.

```cpp
void insertionsort(int a[],int size){

    for (int i = 1; i < size; i++){
        int temp = a[i];
        for (int j = i - 1; j >= 0;j--){ // i 위치부터 0번째 인덱스 까지 확인
            if(temp<a[j]){ 
                a[j + 1] = a[j];
                a[j] = temp;
                temp = a[j];
            }else{
                continue;
            }
        }
    }
}
```

![Untitled](https://s3-us-west-2.amazonaws.com/secure.notion-static.com/c51966e2-16b0-424e-b6e5-be99cc6e0576/Untitled.png)

# 4. Sell 정렬

단순 삽입 정렬의 장점을 살리고, 단점을 보완한 정렬 알고리즘

일정한 간격으로 떨어져 있는 두 요소를 그룹으로 묶어 대략 정렬을 수행하고, 

간격을 좁히면서 정렬을 반복해서 **“요소의 이동 횟수를 줄이는 방법”**

# 5. 퀵 정렬→ 반으로 쪼개서 정렬시키는 방법

**일반적으로 퀵 정렬이 가장 빠르지만,**

**이미 정렬이 되어 있는 상태에서는 최악의 시간 복잡도를 가진다 O(N^2)**

## O(N*lon N)

**3** 7 8 1 5 9 6 10 2 4

3을 pivot으로 두고 왼쪽은 3보다 큰 값 탐색, 오른쪽은 3보다 작은 값 탐색→ 큰 값과 작은 값을 서로 교환

**3** 2 8 1 5 9 6 10 7 4

같은 방식으로 3을 기준으로 왼쪽은 3보다 큰 값 탐색, 오른쪽은 3보다 작은 값 탐색 → 큰 값과 작은 값을 서로 교환

**3** 2 1 8 5 9 6 10 7 4

작은 값의 인덱스가 큰 값의 인덱스보다 더 작은 상황 **(엇갈린 상황)**

왼쪽에 있는 값과 pivot 값을 서로 바꿔줌

**1** 2 3 8 5 9 6 10 7 4 

3을 기준으로 3 왼쪽 값들은 정렬이 된 상태며, 더 작은 값들로 정렬

오른쪽 값들은 3보다 모두 큰 값들 

왼쪽과 오른쪽 두 집합으로 분할이 된 것.

**1** 2 3 **8** 5 9 6 10 7 4

왼쪽 pivot : 1

오른쪽 pivot : 8

다시 왼쪽과 오른쪽에서 정렬을 수행해준다.

**1** 2 3 **8** 5 9 6 10 7 4

---

**왼쪽**

1 2 3

왼쪽에서 큰 값 = 2

오른쪽에서 작은 값(오른쪽 값이 없으면 자기자신) = 1

⇒ 엇갈린상태 자기자신(1)과 1을 바꿈

 1 2 3 8 5 9 6 10  4

---

**오른쪽**

3 8 5 9 6 10 7 4

왼쪽에서 큰 값 = 9

오른쪽에서 작은 값 = 4

교환

3 8 5 4 6 10 7 9

큰 값 10

작은 값 7

교환

3 8 5 4 6 7 10 9

큰 값 10

작은 값 7

엇갈림 → 8과 7을 바꿔줌

pivot 값 변경!

3 7 5 4 6 8 10 9

또 8을 기준으로 작은 값은 왼쪽에 있고, 큰 값은 오른쪽에 정렬됨

---

1 2 3 7 5 4 6 8 10 9

1 2 3 6 5 4 7 8 10 9

1 2 3 4 5 6 7 8 10 9

1 2 3 4 5 6 7 8 10 9

1 2 3 4 5 6 7 8 10 9

1 2 3 4 5 6 7 8 10 9

1 2 3 4 5 6 7 8 10 9

1 2 3 4 5 6 7 8 10 9

1 2 3 4 5 6 7 8 9 10

1 2 3 4 5 6 7 8 9 10

```cpp
void quicksort(int a[], int start, int end){
    if(start>=end){ // 원소가 한개인 경우
        return;
    };

    int key = start; // 키는 첫번째 원소
    int i = start + 1; // 왼쪽출발 지점 / 오른쪽으로 큰 값을 탐색
    int j = end;       // 오른쪽 출발 지점 / 왼쪽으로 작은 값을 탐색
    int temp;          // 두가지 값을 변경해줄 때 사용할 변수

    while(i<=j){ // 엇갈릴 때 까지 반복
        while(a[i]<=a[key]){ // 키 값보다 큰 값을 만날때 까지 오른쪽으로 이동
            i++;
        }
        while(a[j]>=a[key]&& j>start){ // 키 값보다 작은 값을 만날때 까지 왼쪽으로 이동
            j--;
        }
        if(i>j){ // 현재 엇갈린 상태면 키 값과 교체
            temp = a[j];
            a[j] = a[key];
            a[key] = temp;
        }else{ // 엇갈리지 않았다면 큰 값과 작은 값 교체
            temp = a[j];
            a[j] = a[i];
            a[i] = temp;
        }
        quicksort(a, start, j-1);
        quicksort(a, j + 1, end);

        /*

        데이터가 엇갈려서 밖으로 빠져 나오는 경우에는
        key값을 기준으로 왼쪽과 오른쪽에서 각각 다시 퀵 정렬 수행

        */
    }
}
```

# 6. 병합 정렬

## O(N*logN)

하나의 큰 문제를 두 개의 작은 문제로 분할한 뒤 각자 계산하고, 나중에 합치는 방법

**일단 반으로 나누고 나중에 합쳐서 정렬하자는 컨셉**

**퀵정렬이 가지는 한계점을 보완할 수 있다.** 

**평균적으로 퀵 정렬보다 빠르진 않음.**

퀵정렬과 다르게 pivot 값이 없음

총 N개를 계속 반으로 쪼개기 때문에 Nlog번 수행하게 되어 시간 복잡도는 O(N*logN)이다.

기존에 데이터를 정렬해서 추가적인 배열 공간이 필요하다는 점에서 좀 불편하지만,

시간복잡도가 O(N*logN)으로 보장되기 때문에 효율이 있음.

이미 정렬이 되어 있는 상태에서 새로운 값들을 합쳐서 다시 새로운 정렬을 만드는 것

![Untitled](https://s3-us-west-2.amazonaws.com/secure.notion-static.com/c2ccfa3c-d445-43d9-9f25-4dc5fe66a57f/Untitled.png)

```cpp
void merge(int a[], int m, int middle, int n)
{
    int i =m;
    int j = middle + 1;
    int k = m; // 합쳐서 정렬할 새로운 배열의 시작점

    // 작은 순서대로 배열에 삽입
    while (i <= middle && j <= n){
        if(a[i]<=a[j]){
            sorted[k] = a[i];
            i++;
        }else{
            sorted[k] = a[j];
            j++;
        }
        k++; // k 값을 이동시켜서 다음 원소 값을 받을 수 있게
    }
    // 남은 데이터도 삽입
    if(i>middle){
        for (int t = j; t <= n;t++){
            sorted[k] = a[t];
            k++;
        }
    }else{
        for (int t = i; t <= middle;t++){
            sorted[k] = a[t];
            k++;
        }
    }
    //정렬된 배열을 삽입
    for (int t = m; t <= n;t++){
        a[t] = sorted[t];
    }
}
```

```cpp
void mergesort(int a[], int m, int n){
    // 크기가 1보다 큰 경우
    if(m<n){
        int middle = (n + m) / 2; //정중앙
        /*두가지 경우를 재귀함수로 */
        mergesort(a, m, middle);// 왼쪽으로 병합정렬추가
        mergesort(a, middle + 1, n); // 오른쪽으로 병합정렬추가
        merge(a, m, middle, n); // 정렬된 두개의 배열을 합친다.
    }
};
```

---

[Study](https://www.notion.so/Study-4c72f15a37d540429de3116e15930f73)