// M. Suffix Sum

// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/M

#include <iostream>
#include <vector>
using namespace std;

void VecIn(vector<long long> &v, int n) {
    v.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
}

long long sufSum(vector<long long> &arr,int m) {
    if(m==0)return 0;
    return arr[arr.size()-m]+sufSum(arr,m-1);
}

int main() {
    int n,m;
    cin >> n >> m;
    if(n<=0 || m<=0 || m>n){
        cout << 0 << endl;
        return 0;
    }
    vector<long long> v;
    VecIn(v, n);
    
    cout << sufSum(v,m) << endl;

    return 0;
}
