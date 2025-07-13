#include <iostream>
#include <string>

using namespace std;

int main(){
    int n;

    cin >> n;  

    string s = to_string(n);

    int sum = 0;
    int number[10] = {};

    int a[10] = {0,1,2,3,4,5,6,7,8,9};

    for(int i=0; i<10; ++i)
        number[s[i] - '0']++;

    for(int i=0; i<10; ++i)
        if(i != 9 && i != 6){
            if(number[i] > sum)
                sum = number[i];
        }

    if(sum < (number[6] + number[9] + 1) / 2)
        sum = (number[6] + number[9] + 1) / 2;

    cout << sum;

    return 0;

}