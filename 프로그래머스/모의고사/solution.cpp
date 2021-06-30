#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers)
{
    vector<int> answer;

    vector<int> num(3);
    int p1[5] = {1,2,3,4,5};
    int p2[8] = {2,1,2,3,2,4,2,5};
    int p3[10] = {3,3,1,1,2,2,4,4,5,5};

    for (int i = 0; i < answers.size(); i++)
    {
        if (p1[i % 5] == answers[i])
            num[0]++;
        if (p2[i % 8] == answers[i])
            num[1]++;
        if (p3[i % 10] == answers[i])
            num[2]++;
    }

    int max = *max_element(num.begin(), num.end());

    for(int i=0; i<3; i++){
        if(num[i] == max) answer.push_back(i+1);
    }

    return answer;
}

int main(){
    vector<int> input;

    input.push_back(1);
    input.push_back(3);
    input.push_back(2);
    input.push_back(4);
    input.push_back(2);

    vector<int> output = solution(input);

    for(int i=0; i<output.size(); i++){
        cout << output[i] << endl;
    }
}