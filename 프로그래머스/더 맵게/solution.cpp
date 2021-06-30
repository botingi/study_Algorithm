#include <iostream>
#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(vector<int> scoville, int K)
{
    int answer = 0;

    priority_queue<int, vector<int>, greater<int> > pq(scoville.begin(), scoville.end());

    while(pq.top() < K){
        if(pq.size() == 1) return -1;

        int first = pq.top();
        pq.pop();

        int second = pq.top();
        pq.pop();

        pq.push(first+(second*2));

        answer++;
    }
    return answer;
}

int main(){
    int arr[] = {1,2,3,9,10,12};
    vector<int> v(begin(arr),end(arr));

    cout << solution(v,7) << endl;
}