#include <string>
#include <vector>
#include <ctype.h>

using namespace std;

bool solution(string s) {
    bool answer = true;
    int check = 1;

    if(s.length() == 4 || s.length() == 6)
        answer = true;
    else
        answer = false;
    
    for(int i=0; i<s.length(); i++){
        check = isdigit(s[i]);
        if(check == 0){
            answer = false;
            break;
        }
    }

    return answer;
}