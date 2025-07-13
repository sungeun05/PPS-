#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    string answer = "";

    int month[12] ={31,29,31,30,31,30,31,31,30,31,30,31};

    string day[7] = {"FRI", "SAT", "SUN", "MON", "TUE", "WED", "THU"};

    int days = 0;

    for(int i = 0; i < a-1; i++)
        days += month[i];

    days += b - 1;

    int tmp = days % 7;

    answer = day[tmp];

    return answer;
}