// M. Suffix Sum

// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/M

#include <iostream>
#include <vector>
using namespace std;

void VecIn(vector<int> &v, int n) {
    v.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
}

int sufSum(const vector<int> &arr,int m) {
    if(m==0)return 0;
    return arr[arr.size()-m]+sufSum(arr,m-1);
}

int main() {
    int n,m;
    cin >> n >> m;
    if(n==0 || m==0)return 0;
    vector<int> v;
    VecIn(v, n);

    cout << sufSum(v,m);

    return 0;
}
