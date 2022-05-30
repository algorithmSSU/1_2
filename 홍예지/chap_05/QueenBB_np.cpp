#include <iostream>
using namespace std;

void print();
void set(int i);

int *pos = new int[8];
bool *flag = new bool[8];




void print()
{
    for (int i = 0; i < 8; i++)
    {
        cout << pos[i] << endl;
    };
    cout << "\n" << endl;
    delete[] pos;
    int *pos = new int[8];
};

void set(int i)
{
    for (int j = 0; j < 8; j++)
    {
        if(flag[j]==false){
            pos[i] = j;
            if (i == 7)
            {
                print();
                
            }else{
            flag[j] = true;
            i = i + 1;
            set(i);
            flag[j] = false;
            }
        };
    };
};

int main()
{

    set(0);
};