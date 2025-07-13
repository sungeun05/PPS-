#include <iostream>

using namespace std;

int main(){

    string word;

    cin >> word;

    for(int i = 0; i<word.length(); i++){
        if(i % 10 == 0 && i !=0 ){
            cout<<endl;
            cout << word[i];
        }
        else
            cout << word[i];
    }

    
    return 0;
    
}