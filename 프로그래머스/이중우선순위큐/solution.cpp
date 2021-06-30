#include <string>
#include <vector>
#include <iostream>
#include <queue>
#include <string>

using namespace std;

vector<int> solution(vector<string> operations)
{
    vector<int> answer(2, 0);
    priority_queue<int, vector<int> > max;
    priority_queue<int, vector<int>, greater<int> > min;
    int cnt = 0;

    for(int i=0; i<operations.size(); i++){
        if(cnt == 0){
            while(!max.empty()) max.pop();
            while(!min.empty()) min.pop();
        }

        if(operations[i][0] == 'I'){
            max.push(stoi(operations[i].substr(2)));
            min.push(stoi(operations[i].substr(2)));
            cnt++;
        }else{
            if(cnt == 0) continue;

            if(operations[i][2] == '1'){
                max.pop();
                cnt--;
            }else{
                min.pop();
                cnt--;
            }
        }
    }

    if(cnt){
        answer[0] = max.top();
        answer[1] = min.top();
    }

    return answer;
}

// vector<int> solution(vector<string> operations)
// {
//     vector<int> answer(2,0);
//     priority_queue<int> pq;
//     priority_queue<int> tmp;

//     for(int i=0; i<operations.size(); i++){
//         if(operations[i].compare("D 1") == 0){
//             if(pq.size() >= 1) pq.pop();
//         }else if(operations[i].compare("D -1") == 0){
//             if(pq.size() >= 2){
//                 while(pq.size() > 1){
//                     tmp.push(pq.top());
//                     pq.pop();
//                 }
//                 pq.swap(tmp);

//                 while(!tmp.empty()) tmp.pop();
//             }else if(pq.size() == 1){
//                 pq.pop();
//             }
//         }else{
//             int t = stoi(operations[i].substr(2,operations[i].size()-1));
//             pq.push(t);
//         }
//     }
//     if(pq.size() == 1){
//         if(pq.top() > 0) answer[0] = pq.top();
//         else answer[1] = pq.top();
//     }
//     if(pq.size() >= 2){
//         answer[0] = pq.top();
//         while(pq.size() > 1){
//             pq.pop();
//         }
//         answer[1] = pq.top();
//     }
//     return answer;
// }

int main()
{
    vector<string> v;
    // v.push_back("I 16");
    // v.push_back("D 1");

    // v.push_back("I 7");
    // v.push_back("I 5");
    // v.push_back("I -5");
    // v.push_back("D -1");

    v.push_back("I 16");
    v.push_back("I -5643");
    v.push_back("D -1");
    v.push_back("D 1");
    v.push_back("D 1");
    v.push_back("I 123");
    v.push_back("D -1");

    vector<int> ans;

    ans = solution(v);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }
}