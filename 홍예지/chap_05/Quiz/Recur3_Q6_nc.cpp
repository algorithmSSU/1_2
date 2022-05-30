#include <iostream>
#include <vector>
#include <stack>
using namespace std;


void recur3(int n);
void non_recur(int n);

int main(){

    recur3(4);

    cout << "================" << endl;

    non_recur(3);
}


void recur3(int n){
    if (n>0){
        recur3(n - 1);
        recur3(n - 2);
        cout << n << endl;
    }
}

void non_recur(int n){
    stack<int> stak;
    vector<int> vec;

    int tmp, tmpp;
    if (n==1){
        cout << n << endl;
    }else{
        do{
        stak.push(n);
        n = n - 1;
        } while (n ==0);

        for (int i = 0; i < stak.size();i++){
            int temp = stak.top();
            if (temp == 1)
            {
                vec.push_back(temp);
                stak.pop();
            }
            else
            {
                tmp = temp - 1;
                tmpp = temp - 2;
            };

        }
            
    }

    for (vector<int>::iterator i = vec.begin(); i < vec.end();i++){
        cout << *i << endl;
    }
}