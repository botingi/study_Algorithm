#include <iostream>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow)
{
    vector<int> answer(2);

    int total = brown+yellow;

    int a = (int)sqrt(total);

    while(true){
        int b = (int)((yellow/(a-2))+2);

        if(a*b == total && a >= b){
            answer[0] = a;
            answer[1] = b;
            return answer;
        }

        a++;
    }
    
    return answer;
}

int main(){
    vector<int> ans = solution(24,24);

    for(int i=0; i<ans.size(); i++) cout << ans[i] << " ";
}