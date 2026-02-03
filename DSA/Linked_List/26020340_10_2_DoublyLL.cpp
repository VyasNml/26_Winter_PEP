#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;
    Node(int val) {
        data = val;
        prev = NULL;
        next = NULL;
    }
};

void insertAtBeg(Node* (&head),int value){
    Node* newNode = new Node(value);
    if(head==nullptr){
        head=newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

void insertAtEnd(Node* head, int val) {
    Node* newNode = new Node(val);
    if (head == NULL) return;
    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
    return;
}

void insertAtPos(Node* (&head),int val,int pos){
    if(pos<=1){
        insertAtBeg(head,val);

    }
    Node* temp = head;
    for(int i=1;i<pos-1;i++){
        if(temp==nullptr){
            insertAtEnd(head,val);
        }
        temp=temp->next;
    }
    Node* newNode = new Node(val);
    newNode->next = temp->next;
    temp->next = newNode;

    newNode->prev = temp;
    if(newNode->next!=nullptr){
        newNode->next->prev = newNode;
    }
}

void printListForward(Node* (&head)) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void printListBackward(Node* head) {
    if (head == NULL) return;
    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->prev;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;

    insertAtBeg(head,3);
    insertAtBeg(head,2);
    insertAtBeg(head,1);
    
    printListForward(head);
    
    insertAtEnd(head,4);
    insertAtEnd(head,5);
    printListForward(head);
    
    insertAtPos(head,0,0);

    return 0;
}