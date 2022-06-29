#include <iostream>
#include <string>

using namespace std;

class A{
};

class B{
    public:
        int x;
        B(int n) : x(n){};
        string tostring();
};

int main(){

    B *b1 = new B(18);
    B *b2 = new B(55);

    cout << "b1=" << b1->tostring() << endl;
    cout << "b2=" << b2->tostring() << endl;
};

string B::tostring(){

    string t = "B[" + to_string(x) + "]";
    return t;
};
