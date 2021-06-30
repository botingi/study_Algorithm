#include <vector>
#include <iostream>
#include <queue>

using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights)
{
    int answer = 0;
    queue<int> time;
    queue<int> truck;
    int idx = 0;
    int sum = 0;

    while (true)
    {
        answer++;

        if (!truck.empty())
        {
            if (answer - time.front() == bridge_length)
            {
                sum -= truck.front();
                truck.pop();
                time.pop();
            }
        }

        if (weight - sum >= truck_weights[idx])
        {
            if (idx == truck_weights.size() - 1)
            {
                answer += bridge_length;
                break;
            }

            sum += truck_weights[idx];
            truck.push(truck_weights[idx++]);
            time.push(answer);
        }
    }
    return answer;
}

int main()
{
    int arr[] = { 7,4,5,6 };
    vector<int> v(begin(arr),end(arr));
    int ans;
    ans = solution(2, 10, v);
    cout << ans << endl;

    return 0;
}