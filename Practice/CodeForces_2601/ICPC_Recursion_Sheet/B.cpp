//https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/B

#include <iostream>
using namespace std;

void printRange(int n){
    if(n==0)return;
    printRange(n-1);
    cout << n << endl;
}

int main() {
    int n;
    cin >> n;
    printRange(n);
    
    return 0;
}