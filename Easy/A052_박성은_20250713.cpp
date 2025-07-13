#include <iostream>
#include <vector>

using namespace std;

int main(){

    int n;

    cin >> n;

    vector<vector<char>> ox(n);

    for(int i = 0; i<n; i++){
        string line;
        cin >> line;

        for(char c : line){
            ox[i].push_back(c);
        }
    }

    for(int i = 0; i<n; i++){
        int count = 0;
        int before = 0;
        for(int j = 0;j < ox[i].size() ; j++){
            
            if(ox[i][j] == 'O'){
                if(before >= 1){
                    count += before + 1;
                    before++;
                }
                else{
                before ++;
                count += 1;
                }
            }
            else
                before = 0;
        }
        cout << count<<endl;
    }

    
}