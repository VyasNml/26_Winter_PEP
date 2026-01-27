//https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/?envType=problem-list-v2&envId=arrayhttps://leetcode.com/problems/remove-duplicates-from-sorted-array/description/?envType=problem-list-v2&envId=array

//10
// 0 0 1 1 1 2 2 3 3 4


#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int>& nums) {
        int j=0;
        for(int i=1;i<nums.size();i++){
            if(nums[j]!=nums[i]){
                nums[++j]=nums[i];
            }
        }
        return j+1;
    }

void VecIn(vector<int> &v, int n) {
    v.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
}

void VecOut(vector<int> &v,int l) {
    for (int i=0;i<l;i++) {
        cout << v[i] << ' ';
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Provide Inputs\nn: ";
    cin >> n;
    cout  << endl;

    vector<int> v;
    VecIn(v, n);
    int l = removeDuplicates(v);
    VecOut(v,l);

    return 0;
}