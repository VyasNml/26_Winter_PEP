#include <iostream>
#include <vector>
using namespace std;

void VecIn(vector<int> &v, int n) {
    v.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
}
void VecOut(const vector<int> &v) {
    for (int x : v) {
        cout << x << ' ';
    }
    cout << endl;
}

int BinarySearch(vector<int> &nums,int value,int l,int r){
    while(l<r){    
        int m = (l+r)/2;
        if(nums[m]==value){
            return m;
        }
        if(nums[m]<value)l = m;
        if(nums[m]>value)r = m;
    }
    return -1;
}

int main() {
    int n;
    cin >> n;

    vector<int> v = {2,4,5,7,8,10,12,15,20};

    int value = 12,l=0,r=v.size()-1;
    int key = BinarySearch(v,value,l,r);
    cout << key;

    

    return 0;
}