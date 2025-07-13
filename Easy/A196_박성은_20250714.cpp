#include <iostream>
#include <vector>

using namespace std;

int main(){

    int count = 0;
    int n;
    cin >> n;

    vector<int> num(n,0);

    for(int i = 0; i<n; i++){
        cin >> num[i];
    }

    int find;
    cin >> find;

    for(int i = 0; i<n; i++)
        if(num[i] == find)
            count++;
    
    cout << count;

    return 0;
}