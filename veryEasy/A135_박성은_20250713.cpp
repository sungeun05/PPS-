#include <iostream>
#include <map> // key 와 value 한쌍으로 저장

using namespace std;

int main(){

    int n;
    cin >> n;

    map<string, int> book;

    for(int i = 0; i<n; i++){
        string name;
        cin >> name;
        book[name]++;
    }

    string maxBook = "";
    int maxCount = 0;

    for(auto& pair : book){
        if(pair.second > maxCount){
            maxBook = pair.first;
            maxCount = pair.second;
        }
        else if(pair.second == maxCount && pair.first < maxBook)
            maxBook = pair.first;
    }

    cout << endl;

    cout << maxBook << endl;

    return 0;
}