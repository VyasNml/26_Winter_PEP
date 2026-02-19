// K. Max Number
// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/K

#include <iostream>
using namespace std;

void maxOf(int n,int* maxi){
    if(n==0)return;
    int x;
    cin >> x;
    *maxi = std::max(*maxi,x);
    maxOf(n-1,maxi);
}

int main() {
    int n,maxi=INT_MIN;
    cin >> n;
    maxOf(n,&maxi);
    cout << maxi;
    return 0;
}