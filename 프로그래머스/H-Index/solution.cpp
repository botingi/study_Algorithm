#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> citations)
{
    int answer = 0;

    sort(citations.begin(), citations.end(), greater<int>());
    
    int idx = citations[0];

    int size = citations.size();
    while(true){
        if(idx == 0) return 0;
        
        int num = 0;
        for(int i=0; i<size; i++){
            if(citations[i] >= idx) num++;
            else break;
        }

        if(num >= idx) return idx;

        idx--;
    }

    return answer;
}

int main(){
    vector<int> input;
    
    input.push_back(3);
    input.push_back(0);
    input.push_back(6);
    input.push_back(1);
    input.push_back(5);

    cout << solution(input);
}