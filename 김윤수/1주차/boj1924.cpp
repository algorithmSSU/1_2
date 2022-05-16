#include <iostream>

int main(int argc, char* argv[]){
    int x, y;
    std::cin >> x >> y;
    int MonthToDay[13] = {0, 31, 28, 31,30, 31, 30, 31, 31, 30, 31, 30, 31};
    char *dayOfWeek[7] = { "SUN", "MON", "TUE", "WED", "THU", "FRI","SAT"};
    int day = y;
    for(int i = 1; i < x; i++)
        day += MonthToDay[i];
    std::cout << dayOfWeek[day % 7] ;
    return 0;

}