#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;

    vector<string> a;

    for(int i = 0; i<n; i++){
        string num;
        cin >> num;

        a.push_back(num);
    }

    for(int i=0; i<n; i++){
        int last = a[i][a[i].size()-1] - '0'; // 마지막 숫자 확인

        if(last % 2 == 0)
            cout << "even" <<endl;
        else
            cout << "odd" << endl;
    }
        
    return 0;
}