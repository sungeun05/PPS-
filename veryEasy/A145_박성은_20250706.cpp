#include <iostream>

using namespace std;

long long solution(int price, int money, int count)
{
    long long answer = -1;
    long long k = 0;

    for(int i=1; i<= count; i++)
        k += price * i;

    if(k > money)
        answer = k - money;
    else 
        answer = 0;

    return answer;
}