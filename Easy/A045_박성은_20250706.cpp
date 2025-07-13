#include <iostream>
#include <cstring>   
#include <cctype>    

using namespace std;

int main(){ 
    char str[1000001];
    int n, a[129] = {0}, max = 0, max_i = 0, check = 0;

    cin >> str;
    n = strlen(str);

    for(int i = 0; i < n; i++){
        str[i] = toupper(str[i]);
        a[str[i]]++;
    }

    for(int i = 0; i < 129; i++){
        if(a[i] > max){
            max = a[i];
            max_i = i;
        }
    }

    for(int i = 0; i < 129; i++)
        if(max == a[i] && max_i != i)
            check = 1;

    if(check == 1)
        cout << "?";
    else
        cout << (char)max_i;  

    return 0;
}
