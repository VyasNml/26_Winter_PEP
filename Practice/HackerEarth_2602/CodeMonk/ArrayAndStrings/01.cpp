// Monk and Rotation

// https://www.hackerearth.com/practice/codemonk/

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

void rotate(vector<int>& nums, int k) {
        if(k>nums.size())k %= nums.size();
        for(int i=0;i<k;i++){
                nums.insert(nums.begin(),nums[nums.size()-1]);
                nums.erase(nums.end());
        }      
    }
int main() {
    int T;
    cin >> T;
    for(int i=0;i<T;i++){

        int n,k;
        cin >> n >> k;
        
        vector<int> v;
        VecIn(v, n);
        
        rotate(v,k);
        
        VecOut(v);
        
    }
    return 0;
}