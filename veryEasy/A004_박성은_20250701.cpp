#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int divisor) { // 함수 
    vector<int> answer;
    int count = 1;

    for(int i = 0; i<arr.size(); i++){
        if(arr[i] % divisor == 0){
            count = 0;
            answer.push_back(arr[i]);
        }
    }

    if(count == 0){

        for(int i=0; i<answer.size(); i++){
            int min = answer[i];
            for(int j=i+1; j<answer.size()-1; j++){
                if(answer[min]>answer[j])
                    min = j;
                    swap(answer[i],answer[min]);
            }
        }
        return answer;
    }
    else if (count == 1){
        answer.push_back(-1);
        return answer;
    }

}

