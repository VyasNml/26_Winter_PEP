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

void InsertionSort(vector<int> &nums){
    for(int i=1;i<nums.size();i++){
        for(int j=0;j<i;j++){
            if(nums[j]>nums[i])swap(nums[j],nums[i]);
        }
    }
}

int main() {
    vector<int> arr = {22,6,9,13,4,5,20,7,15,12,21,11};

    VecOut(arr);
    InsertionSort(arr);
    VecOut(arr);

    return 0;
}