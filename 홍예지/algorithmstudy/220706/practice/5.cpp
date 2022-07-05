#include <iostream>
#include <string>
using namespace std;

int main(){

    int num = 12345;
    string n = to_string(num);
    int size = n.length();
    cout << size;
};