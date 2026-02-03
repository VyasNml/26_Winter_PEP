#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data = val;
        next = nullptr;
    }
};

void insertAtEnd(Node* (&head),int val){
    Node* newNode = new Node(head->data);
    newNode->next = head->next;
    head->next = newNode;
    head->data = val;
    head = newNode;
}


int main() {
    Node* head = nullptr;


    return 0;
}