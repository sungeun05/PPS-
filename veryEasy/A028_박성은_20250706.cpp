#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string addNum(string a, string b);

int main(){ 
    string a, b;

    cin >> a >> b;

    string sum = addNum(a,b);

    cout << sum;

    return 0;

}

string addNum(string a, string b){
    string res;

    int maxLen = max(a.length(), b.length());
    a = string(maxLen - a.length(), '0') + a;
    b = string(maxLen - b.length(), '0') + b;

    int carry = 0;
    for(int i= maxLen -1; i >= 0; i--){
        int digitSum = (a[i] - '0') + (b[i] - '0') + carry;
        carry = digitSum / 10;
        res += (digitSum % 10) + '0';
    }

    if(carry > 0)
        res += carry + '0';

        reverse(res.begin(),res.end());

        return res;

}