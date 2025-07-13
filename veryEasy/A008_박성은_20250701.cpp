#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

int main(){
    int n = 0;
    int k = 0;
    int num = 0;

    vector<vector<int>> a;

    cin >> n;

    vector<int> percent(n,0);

    for(int i=0; i<n; i++){
        cin >> k;
        vector<int>tmp;
        for(int j=0; j<k; j++){
            cin >> num;
            tmp.push_back(num);
        }
        a.push_back(tmp);
    }

    int sum = 0;
    int total = 0;

    for(int i=0; i<n; i++){
        sum = total = 0;
        for(int j=0; j<a[i].size(); j++){
            sum += a[i][j];
        }
        total = sum / a[i].size();
        percent[i] = total;
    }

    vector<double> final(n);


    for(int i=0; i<n; i++){
        int count = 0;
        for(int j=0; j<a[i].size(); j++){
            if(a[i][j] > percent[i])
                count++;
        }
        final[i] = (count / (a[i].size() * 1.0)) * 100; 
               
    }

    for(int i=0; i<n; i++)
       printf("%.3lf%%\n",final[i]);

}