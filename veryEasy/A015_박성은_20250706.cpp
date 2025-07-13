#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int a[5] = {0};
    int total = 0;

    for(int i=0; i<5; i++)
        cin >> a[i];

    for(int i=0; i<5; i++)
        total += pow(a[i],2);
    
    total = total % 10;

    cout << total;
    
}
