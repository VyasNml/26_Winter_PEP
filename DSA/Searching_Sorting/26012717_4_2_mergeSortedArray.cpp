//https://leetcode.com/problems/merge-sorted-array/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//Leetcode Solution
class Solution {
public:
    void merge1(vector<int>& nums1, int m, vector<int>& nums2, int n) {
	    int i=m-1,j=n-1,k=m+n-1;
	    while(j>=0){
		    if(i>=0 && nums1[i] > nums2[j]){
				  nums1[k--] > nums1[i--];
			  }else{
				  nums1[k--] = nums2[j--];
			  }
		  }
    }

    void merge2(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for(int i=0;i<n;i++){
            nums1[m++]=nums2[i];
        }
        sort(nums1.begin(),nums1.end());
    }
};

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


vector<int> mergeTwoSortedArr(vector<int> nums1,vector<int> nums2){
    vector<int> ans;
    int i=0,j=0;
    while(i<nums1.size() && j<nums2.size()){
        if(nums1[i]<nums2[j]){
            ans.push_back(nums1[i++]);
        }else{
            ans.push_back(nums2[j++]);
        }
    }
    while(i<nums1.size()){
        ans.push_back(nums1[i++]);
    }
    while(j<nums2.size()){
        ans.push_back(nums2[j++]);
    }
    return ans;
}

int main() {

    vector<int> nums1 = {1,2,5}, nums2 = {2,4,6},ans;

    ans = mergeTwoSortedArr(nums1,nums2);

    VecOut(ans);

    return 0;
}