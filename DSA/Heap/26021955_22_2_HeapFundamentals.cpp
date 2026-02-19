#include <iostream>
#include <vector>
using namespace std;

class Heap{
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

};

int main() {
    
    return 0;
}