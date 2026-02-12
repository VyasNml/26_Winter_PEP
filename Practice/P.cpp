// P. Log2

// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/P

#include <iostream>
using namespace std;

int solution(long long n){
    if(n<=1)return 0;
    if(n==2)return 1;
    return 1+solution(n/2);
}

int main() {
    long long n;
    cin >> n;
    cout << solution(n);
    
    return 0;
}