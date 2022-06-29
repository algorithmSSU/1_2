#include <iostream>
#include <string.h>
#include <string>

using namespace std;
int solution(string s);

int main(){
    string text = "abcabcabcabcdededededede";
    int result = solution(text);

    cout << result << endl;
}  


int solution(string s){
    int answer = s.length(); // 문자열 전체의 길이

    if(s.length()==1){
        return 1; // 문자열 길이가 1이면, 단축해도 1
    }

    for (int i = 1; i <= s.length() / 2;i++){ // 비교 갯수 지정
        // 문자열 길이의 중간 지점까지만 비교를 해주면됨
        // 문자열 1개, 2개, 3개 ..n개 씩 가져와서 비교해주는데,
        // 문자열의 길이의 중반까지만 해주면됨 왜냐?
        // 비교해주려는 문자열의 길이가 전체 문자열 길이의 반이면 
        // 비교문자열을 더 늘리지 않아도 전체 문자열을 한번에 확인할 수 있기 때문

        int count = 1; // 같은 문자를 만났을 때 갯수를 세주기 위함
        string f = s.substr(0, i);
        string cmp, cp;

        /*문자열 맨 앞에서 부터 i 개씩 가져온 문자열 셋팅완료
        
        이제 i개씩 가져온 문자열과 비교할 pattern 문자열을 가져온다.
        
        */

       /*위에서 가져온 문자열 다음부터 가져오면 된다.*/
        for (int j = i; j < s.length();j+=i){ // j=i, 즉 i 부터 i 개씩!
            cmp = s.substr(j, i); // j번째부터 i개가져온다.

            if(!(f.compare(cmp))) /*compare 함수는 같다면 0,다르면 -1 return*/
                count++;// 비교 문자열이 같다면 count ++
            else{// 비교 문자열이 같지 않은데, count가 1이면 count를 더해줄 필요x
                if(count ==1){
                    cp += f;
                    f = cmp; // j번째에서 i개 가져온 거를 f로 설정
                }
                else{ // 중복 문자가 있어서 count를 올려주었을 경우
                    cp = cp + to_string(count) + f; //cp 에 count를 문자열로 변환 후 f(비교한 값) 더해준다.
                    f = cmp;
                    count = 1; //count 초기화
                }
            }
            if(j+i>=s.length()){
                // i 개씩
                // j 번째 부터
                // 따라서 i+j가 length의 길이를 초과하면 끝까지 체크한거
                if(count!=1){
                    cp = cp + to_string(count) + f;
                    break;
                }else{
                    // count가 1인 경우 -> 중복 문자가 없었다~
                    cp = cp + s.substr(j);// j번째부터~ 끝까지
                    break;
                }
            }         
        }
        answer = (answer > cp.length()) ? cp.length() : answer;
        
    }
    return answer;
}

/*

총 문자열 길이의 절반(n)까지 pattern을 뽑아서 (1개,2개,3개....full_length/2)
pattern의 길이 만큼 pattern 이후의 문자열과 비교
연속으로 중복되는 (문자 또는 문자열) 있으면 count를 올려주고 비교 문자열 앞에 count를 붙여서 새로운 문자열을 생성
연속으로 중복되는 (문자 또는 문자열) 이 없으면 비교대상인 문자열 그대로 새로운 문자열로

또 중요한 건, pattern 이 아니라 text for문 안에서도 비교대상을 계속 갱신해주어야 함.
pattern을 text에서 추출한 부분으로 다시 셋팅 후 , text에서 그 다음 문자열과 비교 (f=cmp 이부분)



*/