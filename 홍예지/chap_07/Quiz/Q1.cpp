#include <iostream>
#include <vector>
#include <string.h>
#include <iomanip>

using namespace std;

void bf(string text, string pattern);

int main(){

    string text = "ABABABCD";
    string pattern = "ABC";

    bf(text, pattern);
};

void bf(string text, string pattern){

    int tc = 0; // text cursor
    int pc = 0; // patter cursor

    int text_size = text.size();
    int pat_size = pattern.size();

    int count = 0;

    for (int i = 0; i < text_size;i++){
        cout << count++;
        for (int j = 0; j < pat_size;j++){
            if(text[i+j]==pattern[j]){//0 1 2, 1 2 3, 2 3 4
                cout << "\t" << text << endl;
                cout << "\t" << setw(count+j) << "+" << endl;
                cout << "\t" << setw(count+2) << pattern << endl;
            }else{
                cout << "\t" << text << endl;
                cout << "\t" << setw(count+j) << "|" << endl;
                cout << "\t" << setw(count + 2) << pattern << endl;
            }
        };
        
    }
    cout << "비교를 " << count-1 << "회 했습니다." << endl;
}