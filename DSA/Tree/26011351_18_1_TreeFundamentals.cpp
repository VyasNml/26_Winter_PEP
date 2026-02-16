#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;
        Node(int data){
            this->data = data;
            left = nullptr;
            right = nullptr;
        }
};

void insertNode(Node* root,int val){
    if(root->left!=nullptr){
        insertNode(root->left,val);
    }else if(root->left==nullptr){
        Node* newNode = new Node(val);
        root->left = newNode;
        return;  
    }else if(root->right!=nullptr){
        insertNode(root->right,val);
    }else if(root->right){
        Node* newNode = new Node(val);
        root->right = newNode;
        return;  
    }

}

// <node> <left> <right>
void preOrder(Node* root){
    if(!root)return;
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

// <left> <right> <node>
void postOrder(Node* root){
    if(!root)return;
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}

// <left> <node> <right>
void inOrder(Node* root){
    if(!root)return;
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

int countNode(Node* root){
    if(root==nullptr)return 0;
    return 1+countNode(root->left)+countNode(root->right);
}

void printTree(Node* root,int x){
    switch(x){
        case 1:
            cout << "preOrder: " << endl;
            preOrder(root);
            break;
        case 2:
            cout << "postOrder: " << endl;
            postOrder(root);
            break;
        case 3:
            cout << "inOrder: " << endl;
            inOrder(root);
            break;
    }
    cout << endl;
}



int main() {
    Node* root = new Node(1);
    insertNode(root,2);
    insertNode(root,3);
    insertNode(root,4);
    insertNode(root,5);
    insertNode(root,6);
    insertNode(root,7);
    insertNode(root,8);
    insertNode(root,9);
    insertNode(root,10);

    printTree(root,1);
    printTree(root,2);
    printTree(root,3);

    cout << endl << "Node count : " << countNode(root) << endl;

    
    
    return 0;
}