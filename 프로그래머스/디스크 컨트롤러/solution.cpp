#include <queue>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;


bool compare(vector<int> a, vector<int> b)
{
    return a[1] < b[1];
}

int solution(vector<vector<int> > jobs)
{
    int answer = 0;
    int time = 0;
    int size = jobs.size();
    int start = 0;

    sort(jobs.begin(), jobs.end(), compare);

    while(!jobs.empty()){
        for(int i=0; i<jobs.size(); i++){
            if(jobs[i][0] <= start){
                start += jobs[i][1];
                time += start - jobs[i][0];
                jobs.erase(jobs.begin() + i);
                break;
            }
            if(i == jobs.size()-1) start++;
        }
    }
    answer = time/size;
    return answer;
}

int main(){
    vector<vector<int> > v(3);
    v[0].push_back(0);
    v[0].push_back(3);
    v[1].push_back(1);
    v[1].push_back(9);
    v[2].push_back(2);
    v[2].push_back(6);

    cout << solution(v) << endl;
}