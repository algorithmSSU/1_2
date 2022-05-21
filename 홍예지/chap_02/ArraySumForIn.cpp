<<<<<<< Updated upstream:í™ì˜ˆì§€/chap_02/ArraySumForIn.cpp
#include <iostream>
using namespace std;


int main(){

    double arr[5] = {1.0, 2.0, 3.0, 4.0, 5.0};

    cout.setf(ios::fixed);
    cout.precision(1);

    double sum = 0;
    for (int i = 0; i < sizeof(arr) / sizeof(double); i++){
        cout << "arr[" << i << "]=" << arr[i] << endl;
        sum += arr[i];
    };

    cout << "¸ðµç ¿ä¼ÒÀÇ ÇÕÀº " << sum << " ÀÔ´Ï´Ù." << endl;
=======
#include <iostream>
using namespace std;


int main(){

    double arr[5] = {1.0, 2.0, 3.0, 4.0, 5.0};

    // ¼Ò¼öÁ¡ ¼³Á¤
    cout.setf(ios::fixed);
    cout.precision(1);

    double sum = 0;
    for (int i = 0; i < sizeof(arr) / sizeof(double); i++){
        cout << "arr[" << i << "]=" << arr[i] << endl;
        sum += arr[i];
    };

    cout << "¸ðµç ¿ä¼ÒÀÇ ÇÕÀº " << sum << " ÀÔ´Ï´Ù." << endl;
>>>>>>> Stashed changes:chap_02/ArraySumForIn.cpp
}