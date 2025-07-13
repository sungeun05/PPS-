#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

int main(){

    string n;
    vector <int> num;

    cin >> n;

    for(int i = 0; i<n.length(); i++){    
        num.push_back(n[i] - '0'); // 숫자로 정렬하기 위해
    }

    sort(num.begin(),num.end(),greater<int>()); // 내림차순

    for(int i = 0; i<num.size(); i++){
        cout << num[i];
    }
    
    return 0;
    
}