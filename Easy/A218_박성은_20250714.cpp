#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;

    cin >> n;

    vector <vector<int>> a(n,vector<int>(2,0));

    for(int i = 0; i<n; i++){
        for(int j=0; j<2; j++){
            cin >> a[i][j];
        }
    }

    for(int i = 0; i<n; i++){
        int total = 0;
        int rest = 0;

        total = a[i][0] / a[i][1];   
        rest = a[i][0] % a[i][1];           
        
        cout << "You get " << total << " piece(s) and your dad gets " << rest << " piece(s)." << endl;
    }

}