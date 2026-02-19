// T. Combination

// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/T

#include <iostream>
using namespace std;

long long fact(int n){
    if(n<=1)return 1;
    return n*fact(n-1);
}

int main() {
    int n,r;
    cin >> n >> r;
    long long ans = (fact(n)/(fact(r)*fact(n-r)));
    cout << ans;
    return 0;
}