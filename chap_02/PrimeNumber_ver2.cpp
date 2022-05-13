#include <iostream>
using namespace std;
// 1000이하의 소수를 나열
// 짝수(2제외) -> 소수x
// 홀수에서만 나누어 떨어지지 않는 숫자를 찾아보자 라는 아이디어

int main(){

    int counter = 0;
    int ptr = 0;
    int *prime = new int[500];

    prime[ptr++] = 2;

    for (int i = 3; i <= 1000; i+=2){
        int j;
        for (j = 1; j < ptr; j++){
            counter++;
            if(i%prime[j]==0){
                break;
            }
        }if (ptr==j){
            prime[ptr++] = i;
        }
    };
    for (int i = 0; i < ptr; i++)
    {
        cout << prime[i] << endl;
    };
    cout << "나눗셈을 수행한 횟수 : " << counter << endl;
}
