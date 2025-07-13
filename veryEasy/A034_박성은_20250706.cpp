#include <iostream>

using namespace std;

int main(){ 
    int n[10] = {0};
    int a[1001] = {0};
    int count = 0;
    int k = 0;

    for(int i = 0; i<10; i++)
    cin >> n[i];

    for(int i = 0; i<10; i++){
        k = n[i] % 42;
        a[k]++;
    }
    
    for(int i = 0; i<1001; i++)
        if(a[i] != 0)
            count ++;

    cout << count;
    

    return 0;
}