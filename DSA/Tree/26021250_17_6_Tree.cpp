#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int data){
        this->data = data;
        left = nullptr;
        right = nullptr;
    }
};

class Tree{
    Node* root;
};

int main() {
    
    return 0;
}