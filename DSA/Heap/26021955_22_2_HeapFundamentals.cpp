#include <iostream>
#include <vector>
using namespace std;

class Heap{
    public:
    vector<int> heap;
    
    void heapUp(int index){
        while(index>0){
            int parent = (index-1)/2;

            if(heap[index] > heap[parent]){
                swap(heap[index],heap[parent]);
                index = parent;
            }else{
                break;
            }
        }
    }
    
    void insert(int val){
        heap.push_back(val);
        heapUp(heap.size()-1);
    }
    
    void heapDown(int index){
        int i=0;
        int size = heap.size();
        while(i<size){
            int left = i*2 + 1;
            int right = i*2 + 2;
            int largest = i;

            if(left < size && heap[left] > heap[largest]){
                largest = left;
            }
            if(right < size && heap[right] > heap[largest]){
                largest = right;
            }
            if(largest != i){
                swap(heap[i],heap[largest]);
                i=largest;
            }else{
                break;
            }
        }
    }

    void heapify(vector<int> &nums,int n,int i){
        int largest = i;
        int left = 2*i+1;
        int right = 2*i+2;

        if(left<n && nums[left]>nums[largest]){
            largest = left;
        }
        if(right<n && nums[right]>nums[largest]){
            largest = right;
        }

        if(largest!=i){
            swap(nums[i],nums[largest]);
            heapify(nums,n,largest);
        }
    }
};

void VecOut(const vector<int> &v) {
    for (int x : v) {
        cout << x << ' ';
    }
    cout << endl;
}

int main() {
    Heap hp;
    // hp.insert(10);
    // hp.insert(20);
    // hp.insert(30);
    
    vector<int> nums = {5,3,7,9,4,6,8,2,1};
    hp.heapify(nums,nums.size(),1);
    VecOut(nums);

    return 0;
}