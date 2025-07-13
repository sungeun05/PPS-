#include <iostream>

using namespace std;

int main(){
    int x,y;
    int answer = 0;

    cin >> x >> y;

    if(x < 0 && y < 0)
        answer = 3;
    else if(x > 0 && y < 0)
        answer = 4;
    else if(x > 0 && y > 0)
        answer = 1;
    else if(x < 0 && y > 0)
        answer = 2;

    cout << answer;
    
    return 0;
}