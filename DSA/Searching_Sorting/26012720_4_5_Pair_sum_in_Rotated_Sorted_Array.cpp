#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    bool pairInSortedRotated(vector<int>& arr, int target) {
        // code here
        int pivot=0;
        int n=arr.size();
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i]>arr[i+1])pivot = i;
        }
        
        if(pivot==-1)pivot=n-1;
        
        int l=(pivot+1)%n,h=pivot;
        
        while(l!=h){
            int sum = arr[l]+arr[h];
            if(sum==target)return true;
            else if(sum<target)l=(l+1)%n;
            else if(sum>target)h=(h-1+n)%n;   
        }
        return false;
    }
};

int main() {
    
    return 0;
}