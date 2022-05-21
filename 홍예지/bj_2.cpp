#include <iostream>
using namespace std;

int main(){

    int a,b;

    cin >> a >> b;

    int n;
    int x;
    int result;
   for (int start = a; a < b; a++){
            n = a % 2;
            x = a % 5;
            if (n ==1 || x==1 ){

                cout << a << endl;
            }
   };
    
}
