#include <iostream>

using namespace std;

int main(){
    int y;
    int check;

    cin >> y;

    if((y % 4 == 0 && y % 100 != 0)||y % 400 == 0)
        check = 1;
    else 
        check = 0;

    cout << check;

    return 0;
}