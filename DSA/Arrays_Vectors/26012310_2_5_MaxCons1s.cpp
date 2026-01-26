//https://leetcode.com/problems/max-consecutive-ones/

#include <iostream>
#include <vector>
using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums) {
    int count=0,mx = INT_MIN;
    for(int i=0;i<nums.size();i++){
        if(nums[i]==1)count++;
        else count=0;
        mx = std::max(count,mx);
        // mx = (count>mx?count:mx);
    }
    return mx;
}

void VecIn(vector<int> &nums,int n){
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        nums.push_back(x);
    }
}

void VecOut(vector<int> &nums,int n){
    for(int i=0;i<n;i++){
        cout << nums[i] << " ";
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> nums;
    VecIn(nums,n);
    cout << findMaxConsecutiveOnes(nums);    
    return 0;
}