#include <iostream>
#include <vector>

using namespace std;

int main(){

    int n;
    vector <string> name;
    vector <int> check(123,0); // 이름에서 같은 첫번째 단어 수 세기

    int last = 0; // 가장 마지막에 count된 첫번째 단어 int로 변환

    int predaja = 0; // 같은 성이 5개가 되는지 확인

    cin >> n;

    for(int i = 0; i<n; i++){
        string tmp;
        cin >> tmp;
        name.push_back(tmp);

        check[tmp[0]]++;
    }

    for(char c = 'a'; c<='z'; c++){
        if(check[c] >= 5){
            cout << c;
            predaja = 1;
        }
    }

    if(predaja == 0)
        cout << "PREDAJA"<<endl;

    return 0;
}