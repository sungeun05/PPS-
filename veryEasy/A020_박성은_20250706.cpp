#include <iostream>

using namespace std;

int main(){ 
    int a[8]={0},t = 0,max = 0;

    for(int i = 1; i<=8; i++) 
        cin >> a[i];

    t += a[2];
    max = t;

    for(int i = 3; i<7-2; i+=2){
        t -= a[i];
        t += a[i+1];
        if(max < t)
            max = t;
    }
    if(max < a[7])
        max = a[7];

    cout << max;

    return 0;
}