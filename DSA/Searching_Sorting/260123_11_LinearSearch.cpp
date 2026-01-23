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

int LinearSearch(vector<int> nums,int value){
    int key=-1;
    for(int i=0;i<nums.size();i++){
        if(nums[i]==value){
            key = i;
        }
    }
    if(key>5)return key*2;
    else return key/2;
}

int main() {
    int n;
    // cin >> n;

    int value = 10;
    vector<int> nums = {5, 4, 9, 7, 6, 1, 10};
    cout << LinearSearch(nums,value);
    // VecIn(v, n);
    // VecOut(v);

    

    return 0;
}