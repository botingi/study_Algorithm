#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

bool cmp(string a, string b){
    return a+b > b+a;
}

string solution(vector<int> numbers)
{
    string answer = "";
    vector<string> tmp;

    for(int i=0; i<numbers.size(); i++){
        tmp.push_back(to_string(numbers[i]));
    }

    sort(tmp.begin(), tmp.end(), cmp);

    if(tmp[0].compare("0") == 0) return "0";
    for(int i=0; i<tmp.size(); i++){
        answer += tmp[i];
    }
    

    return answer;
}

int main(){
    vector<int> input;
    input.push_back(0);
    input.push_back(0);
    input.push_back(0);

    cout << solution(input) << endl;
}