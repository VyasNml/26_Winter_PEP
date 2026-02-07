//https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/C

#include <iostream>
using namespace std;

void printRange(int n){
    if(n==0)return;
    cout << n;
    if(n!=1)cout << " ";
    printRange(n-1);
}

int main() {
    int n;
    cin >> n;
    printRange(n);
    return 0;
}