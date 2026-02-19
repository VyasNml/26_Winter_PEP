// Q.  3n + 1 sequence

// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/Q

#include <iostream>
using namespace std;

int solution(int n){
    if(n==1) return 1;
    
    if(n&1){
        return 1+solution((n*3)+1);
    }else{
        return 1+solution((n/2));
    }
}

int main() {
    int n;
    cin >> n;
    cout << solution(n);
    
    return 0;
}