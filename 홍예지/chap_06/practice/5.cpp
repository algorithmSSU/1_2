#include <iostream>
#include <vector>

/*
<quicksort>
큰숫자와 작은수를 반으로 나누자는 개념

기준 값 = pivot 설정


왼쪽과 오른쪽을 나누는 알고리즘
분할정복 알고리즘

*/

using namespace std;

void quicksort(int a[], int start, int end);
void print(int a[], int size);
int main(){

    int a[] = {9, 8, 7, 1, 3, 5, 6, 4, 2, 10};

    int number = sizeof(a) / sizeof(int);
    quicksort(a, 0, number - 1);
    print(a, number);
};
void print(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << "\n";
}

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
        if(i>j){ // 현재 엇갈린 상태면 키 값과 교체, pivot을 바꿔줌
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