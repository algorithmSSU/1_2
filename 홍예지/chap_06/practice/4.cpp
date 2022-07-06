#include <iostream>
#include <vector>

using namespace std;


/*
<selectionsort>
가장 작은 값을 맨 앞으로 보내자~
temp = 0번째 값 저장
1번째 값부터~ n-1번째 값까지 제일 작은 값 찾기
0번째 값이랑 제일 작은 값 위치 바꾸어 주기

temp = 1번째 값 저장
2~번째 값부터~ n-1 번째 값 까지 제일 작은 값 찾기
1번째 값이랑 제일 작은 값 위치 바꾸어 주기


이런 식으로 n개의 원소를 방문하며 체크한다. 

연산 횟수를 계산해보면
10+9+8+7+6....+1
=> 10*(10+1)/2


*/

void selectionsort(int a[], int size);
void swap(int a[], int idx_a, int idx_b);
void print(int a[], int size);

int main()
{

    int a[] = {1,9,4,10,6,2,5,3,7,8};
    int size = sizeof(a) / sizeof(int);

    selectionsort(a, size);
    print(a, size);
};

void print(int a[], int size){
    for (int i = 0; i < size; i++){
        cout << a[i] << " ";
    }
    cout << "\n";
}

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

void swap(int a[], int idx_a, int idx_b)
{
    int temp = a[idx_a];
    a[idx_a] = a[idx_b];
    a[idx_b] = temp;
};