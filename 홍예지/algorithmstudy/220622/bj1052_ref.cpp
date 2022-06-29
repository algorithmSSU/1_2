#include <iostream>
using namespace std;

int main()
{
    /*
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);*/

    int n, k;
    cout << "enter n: ";
    cin >> n;
    cout << "\n";
    cout << "enter k: ";
    cin >> k;

    /*물병 n개로 k개 물병만들기*/

    if (k >= n) // k가 n보다 크거나 같으면 새로운 물병이 더 필요없음
    {
        cout << 0;
    }
    else
    {
        int answer = 0;

        while (1)
        {
            int cnt = 0;
            int temp = n; // 물병
            while (temp > 0)
            {
                if (temp % 2 == 0)
                {
                    temp /= 2;
                    cout << "temp: " << temp << endl;
                }
                else
                {
                    temp /= 2;
                    cout << "temp: " << temp << endl;
                    cnt++;
                }
            }
            // cnt가 k보다 작거나 같아지면 종료
            if (k >= cnt)
            {
                break;
            }

            n++;
            answer++;
        }
        cout << "anwer: " << answer;
    }

    return 0;
}

/*https://ongveloper.tistory.com/150*/