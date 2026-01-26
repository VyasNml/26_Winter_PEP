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

void BubbleSort(vector<int> &nums){
    for(int i=0;i<nums.size()-1;i++){
        for(int j=0;j<nums.size()-i-1;j++){
            if(nums[j]>nums[j+1])swap(nums[j],nums[j+1]);
        }
    }
}

int main() {
    vector<int> arr = {22,6,9,13,4,5,20,7,15,12,21,11};

    VecOut(arr);
    BubbleSort(arr);
    VecOut(arr);

    return 0;
}