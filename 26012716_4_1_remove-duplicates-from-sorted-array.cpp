//https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/?envType=problem-list-v2&envId=arrayhttps://leetcode.com/problems/remove-duplicates-from-sorted-array/description/?envType=problem-list-v2&envId=array

#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int>& nums) {
        int j=0,curr=nums[0];
        for(int i=0;i<nums.size();i++){
            if(curr!=nums[i]){
                nums[++j]=nums[i];
                curr = nums[i];
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

void VecOut(const vector<int> &v) {
    for (int x : v) {
        cout << x << ' ';
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;

    vector<int> v;
    VecIn(v, n);
    VecOut(v);

    

    return 0;
}