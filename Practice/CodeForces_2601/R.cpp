// R. Palindrome Array

// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/R

#include <iostream>
#include <vector>
using namespace std;

void VecIn(vector<int> &v, int n) {
    v.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
}

bool isPal(vector<int> &v,int l, int r){
    if(l>=r)return 1;
    return (v[l]==v[r])&&isPal(v,l+1,r-1);
}

int main() {
    int n;
    cin >> n;

    vector<int> v;
    VecIn(v, n);

    if(isPal(v,0,n-1)){
        cout << "YES";
    }else{
        cout << "NO";
    }
    

    return 0;
}