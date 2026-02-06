// J. Factorial

// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/J

#include <iostream>
using namespace std;

long long Factorial(long long n){
    if(n==1)return 1;
    return n*Factorial(n-1);
}

int main() {
    int n;
    cin >> n;
    cout << Factorial(n);
    return 0;
}