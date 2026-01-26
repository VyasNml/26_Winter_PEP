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

void SelectionSort(vector<int> &nums){
    for(int i=0;i<nums.size();i++){
        int* min = &nums[i];
        for(int j=i+1;j<nums.size();j++){
            if(*min>nums[j])min = &nums[j];
        }
        if(nums[i]>*min)swap(nums[i],*min);
    }
}

int main() {
    vector<int> arr = {22,6,9,13,4,5,20,7,15,12,21,11};

    VecOut(arr);
    SelectionSort(arr);
    VecOut(arr);

    return 0;
}