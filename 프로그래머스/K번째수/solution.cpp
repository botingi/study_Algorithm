#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int> > commands)
{
    vector<int> answer;
    
    for(int i=0; i<commands.size(); i++){
        vector<int> tmp(array.begin()+(commands[i][0]-1), array.begin()+commands[i][1]);
        sort(tmp.begin(), tmp.end());
        answer.push_back(tmp[commands[i][2]-1]);
    }
    
    return answer;
}

int main(){
    int arr[] = {1,5,2,6,3,7,4};

    vector<int> tmp(begin(arr), end(arr));

    vector<int> t(tmp.begin()+1, tmp.begin()+5);

    for(int i=0; i<t.size(); i++){
        cout << t[i] << " ";
    }
}