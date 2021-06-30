#include <string>
#include <vector>
#include <iostream>
#include <stack>

using namespace std;

vector<int> solution(vector<int> prices)
{
    vector<int> ans(prices.size());
    
    for(int i=0; i<prices.size(); i++){
        for(int j=i+1; j<prices.size(); j++){
            ans[i]++;
            if(prices[i] > prices[j]) break;
        }
    }

    return ans;
}

int main(){
    int arr[] = {1,2,3,2,3};
    vector<int> v(begin(arr), end(arr));
    vector<int> ans;
    ans = solution(v);

    for(int i=0; i<ans.size(); i++) cout << ans[i] << endl;
}