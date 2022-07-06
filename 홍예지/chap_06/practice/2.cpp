#include <iostream>
#include <vector>

/*
<Insertionsort>
i번째 있는 값 왼쪽 값들을 모두 방문하면서
i번째 있는 값을 어디에다 저장해야 하는지 체크한다.
이방식으로 i=1부터  n-1번째 까지 i 왼쪽에 있는 값과 비교해서
i 왼쪽에 있는 값의 갯수만큼 i위치 값과 비교하면서 제대로 위치했는 지 체크한다.
이렇게 한다면,

"i번째 왼쪽 값들은 모두 정렬이 되어 있는 상태로 유지"

정렬이 완료 된 비율을 늘려주는 방식이다.
하지만 이 또한 n개를 모두 돌면서 i 앞의 n개를 확인해주어야 하기 때문에
n*(n-i) = O(N^2) 시간복잡도를 가진다.



*/

using namespace std;

void insertionsort(int a[], int size);
void print(int a[], int size);

int main(){

    int a[] = {9, 2, 1, 3, 7, 5, 4};

    int size = sizeof(a) / sizeof(int);

    insertionsort(a, size);

    print(a, size);
};


void print(int a[], int size){
    for (int i = 0; i < size; i++){
        cout << a[i] << " ";
    }
    cout << "\n";
}
void insertionsort(int a[],int size){

    for (int i = 1; i < size; i++){
        int temp = a[i];
        for (int j = i - 1; j >= 0;j--){
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