#include <iostream>
using namespace std;

int answer(int a[], int n,int goal);

int main(){

    int arr[] = {93, 181, 245, 214, 315, 36, 185, 138, 216 ,295};
    int n = sizeof(arr) / sizeof(int);

    int goal = 500;

    cout << answer(arr, n, goal);
};


int answer(int arr[],int n,int goal){
    int a, b, c,temp,result;
    for (int i = 0; i < n-2;i++){
        //a = arr[i];
        for (int j = i + 1; j < n - 1;j++){
            //b = arr[j];
            for (int z = j+1; z < n;z++){
                //c = arr[z];
                temp = arr[i] + arr[j] + arr[z];

                if(temp==goal){
                    return temp;
                }
                if (result<temp && goal>temp){
                    result = temp;
                }
            }
        }
    }
    return result;
}

/*https://st-lab.tistory.com/97*/