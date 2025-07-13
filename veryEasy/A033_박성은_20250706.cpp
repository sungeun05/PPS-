#include <iostream>

using namespace std;

int main(){ 

    int a[5][4] = {0}, n = 0, max = 0, mi = 0;

        for(int i = 0; i<5; i++)
            for(int j = 0; j<4; j++)
                cin >> a[i][j];

        for(int i = 0; i<5; i++){
            n = 0;
            for(int j = 0; j<4; j++){
                n += a[i][j];
            }
            if(max < n){
                max = n;
                mi = i+1;
            }
        }

        cout << mi <<" "<<max;

    return 0;
}