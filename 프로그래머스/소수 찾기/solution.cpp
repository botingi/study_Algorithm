#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> per;

bool isPrime(int n){
    if (n<2) return false;
    
    for(int i=2; i*i<=n; i++){
        if(n % i == 0) return false;
    }

    return true;
}

bool isInclude(int t){
    for(int i=0; i<per.size(); i++){
        if(per[i] == t) return true;
    }
    return false;
}

void permutation(string t, int start, int end, int r){
    if(start == r){
        string tmp = t.substr(0,r);
        int k = stoi(tmp);
        if(!isInclude(k)) per.push_back(k);
        return;        
    }

    for(int i=start; i<end; i++){
        // if(t[start] == t[i]) continue;
        swap(t[start], t[i]);
        permutation(t, start+1, end, r);
        swap(t[start], t[i]);
    }
}

int solution(string numbers)
{
    int answer = 0;

    for(int i=1; i<=numbers.length(); i++) permutation(numbers, 0, numbers.length(), i);

    for(int i=0; i<per.size(); i++){
        if(isPrime(per[i])) answer++;
    }

    return answer;
}

int main(){
    cout << solution("011") << endl;
}