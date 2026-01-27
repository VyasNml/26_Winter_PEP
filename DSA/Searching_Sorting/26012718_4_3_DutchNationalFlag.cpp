#include <iostream>
#include <vector>
using namespace std;

void sort012(vector<int>& arr) {
        int l=0,m=0,h=arr.size()-1;
        while(m<=h){
            if(arr[m]==0){
                swap(arr[l++],arr[m++]);
            }else if(arr[m]==1){
                m++;
            }else{
                swap(arr[h--],arr[m]);
            }
        }
        
    }

int main() {
    
    return 0;
}