#include <iostream>

using namespace std;

int young(int a[],int k){
    int x = 0;
    int t = 0;
    for(int i = 0; i<k; i++)
        if(a[i]>=30){
        x = a[i] / 30;
        t += x * 10 + 10;
        }
        else
        t += 10;
        
    return t;

}

int min(int b[],int h){
    int x = 0;
    int t = 0;
    for(int i = 0; i<h; i++)
        if(b[i]>=60){
        x = b[i] / 60;
        t += x * 15 + 15;
        }
        else
        t += 15;

        return t;
}

int main(){ 
   int n,t[21] = {0},m=0,y=0;

   cin >> n;

   for(int i = 0; i<n; i++)
    cin >> t[i];

    m = min(t,n);

    y = young(t,n);

    if(m > y)
        cout << "Y "<<y;
    else if(m < y)
        cout << "M "<<m;
    else if(m == y)
        cout << "Y M "<<y;

    return 0;
}
