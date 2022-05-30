
static void recur2(int n){
    if(n>0){
        recur2(n-2);
        cout << n << endl;
        recur2(n-1);
    }
}


* 상향식 분석

 n>0일때 실행이므로 n=1부터 시작.

 recur2(1) -> recur2(-1); printf(“1\n”); recur2(0); = -1과 0은 작업 없고, 결국엔 1 출력

 recur2(2) -> recur2(0); printf(“2\n”); recur2(1); = 0은 작업없고, 2출력한 뒤 위의 recur2(1)의 작업인 1 출력

 recur2(3) -> recur2(1); printf(“3\n”); recur2(2); = recur2(1)의 작업인 1출력한 뒤 3 출력하고 위의 recur2(2)의 작업인 2 1 출력

 recur2(4) -> recur2(2); printf(“4\n”); recur2(3); = recur2(2)의 작업인 2 1 출력한 뒤 4 출력하고 ㅇ위의 recur2(3)의 작업인 1 3 2 1 출력


* 하향식 분석
 하향식 분석

 위에서 아래로, 계단식으로, 실행되는 순서로 들어갔다가 나옴.

 n이 4일때

 recur2(4) -> recur2(2); printf(“4\n”); recur2(3);

 recur2(2) -> recur2(0); printf(“2\n”); recur(1);

 recur2(0) -> nothing

 recur2(1) -> recur2(-1); printf(“1\n”); recur2(0);

 recur2(-1) -> nothing

 recur2(0) -> nothing

 recur2(3) -> recur2(1); printf(“3\n”); recur2(2);

 recur2(1) -> recur2(-1); printf(“1\n”); recur2(0);

 recur2(-1) -> nothing

 recur2(0) -> nothing

 recur2(2) -> recur2(0) printf(“2\n”); recur(1);

 recur2(0) -> nothing

 recur(1) -> recur2(-1) printf(“1\n”); recur2(0);

 recur2(-1) -> nothing

 recur2(0) -> nothing


