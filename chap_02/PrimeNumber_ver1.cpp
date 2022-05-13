#include <iostream>
using namespace std;
//1000이하의 소수를 나열

// ver1: 이중 for문으로, 2이상 부터 나누는 수 바로 전 숫자까지의 나눗셈연산을 수행해서 
// 모든 숫자가 나누어 떨어지지 않으면 단 하나의 약수도 가지지 않는다고 판단 -> 소수
int main(){
    int counter;
    for (int i = 2; i <= 1000; i++){
        int j;
        for (j = 2; j < i; j++){
            counter++;
            if (i%j==0){
                break;
            }
        }if (i==j){
            cout << i << endl;
        }
    }

    cout << "나눗셈을 수행한 횟수 :" << counter << endl;
}