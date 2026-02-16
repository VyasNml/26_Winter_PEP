#include <iostream>
#include <queue>
#include <vector>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node* insert(Node* root, int val) {
    if (root == NULL) return new Node(val);
    if (val < root->data) root->left = insert(root->left, val);
    else root->right = insert(root->right, val);
    return root;
}

void inorder(Node* root) {
    if (root == NULL) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void preorder(Node* root) {
    if (root == NULL) return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node* root) {
    if (root == NULL) return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

// void levelOrder(Node* root){
//     queue<Node*> q;
//     q.push(root);
//     while(!q.empty()){
//         if(root->left)q.push(root->left);
//         if(root->right)q.push(root->right);
//         // Node* node = q.front();
//         cout << q.front()->data << " ";
//         q.pop();
//     }
// }

vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> ans;
        if(!root)return ans;

        queue<Node*> q;
        q.push(root);

        while(!q.empty()){
            int levSize = q.size();
            vector<int> level;
            for(int i=0;i<levSize;i++){
                Node* node = q.front();
                if(node->left)q.push(node->left);
                if(node->right)q.push(node->right);

                level.push_back(node->data);
                q.pop();
            }
            ans.push_back(level);
        }

        return ans;   
    }

int main() {
    Node* root = NULL;
    Node* newNode = new Node(1);
    root = newNode;
    newNode = new Node(2);
    root->left = newNode;
    newNode = new Node(3);
    root->right = newNode;
    newNode = new Node(4);
    root->left->left = newNode;
    newNode = new Node(5);
    root->left->right = newNode;
    newNode = new Node(6);
    root->right->right = newNode;
    newNode = new Node(7);
    root->left->left->left = newNode;


    cout << "Inorder: ";
    inorder(root);
    cout << endl;

    cout << "Preorder: ";
    preorder(root);
    cout << endl;

    cout << "Postorder: ";
    postorder(root);
    cout << endl;

    // levelOrder(root);  //Disfunctional void function
    vector<vector<int>> nums = levelOrder(root);
    for(auto x:nums){
        for(int i=0;i<x.size();i++){
            cout << x[i] << " ";
        }
        cout << endl;
    }

    
    return 0;
}