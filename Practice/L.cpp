// L. Summation

//https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/L

#include <iostream>
using namespace std;

long long sumOf(int n){
    if(n==0)return 0;
    int x;
    cin >> x;
    return x+sumOf(n-1);
}

int main() {
    int n;
    cin >> n;
    cout << sumOf(n);
    return 0;
}