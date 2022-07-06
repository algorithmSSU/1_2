#include <iostream>
using namespace std;

// 정렬 배열은 반드시 전역 변수로 선언

/*
<mergesort>

*/
#define number 8
int sorted[8]; // 정렬을 위해 사용되는 추가적인 정렬 배열

void merge(int a[], int m, int middle, int n);
void print(int a[], int size);
void mergesort(int a[], int m, int n);

/*배열, 시작점, 중간점, 끝점*/

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

void print(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << "\n";
};

int main(){

    int array[number] = {7, 6, 5, 8, 3, 5, 9, 1};
    mergesort(array, 0, number - 1);
    print(array, number);
};

