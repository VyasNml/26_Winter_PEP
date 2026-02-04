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

void insertAtBeg(Node* (&head),int val){
    if(head==nullptr){
        Node* newNode = new Node(val);
        newNode->next = newNode;
        head = newNode;
        return;
    }
    Node* newNode = new Node(head->data);
    head->data = val;
    newNode->next = head->next;
    head->next = newNode;
}

void insertAtEnd(Node* (&head),int val){
    Node* newNode = new Node(head->data);
    newNode->next = head->next;
    head->next = newNode;
    head->data = val;
    head = newNode;
}

void insertAtPos(Node* &head,int val, int pos){
    if(pos<=1)insertAtBeg(head,val);
    Node* temp = head->next; 
    for(int i=2;i<pos-1;i++){
        temp=temp->next;
    }
    Node* newNode = new Node(temp->val);
}

void printList(Node* head){
    if(head==nullptr)return;
    Node* temp = head;
    do{
        cout << temp->data << " ";
        temp=temp->next;
    }while(temp!=head);
    cout << endl;
}

int main() {
    Node* head = nullptr;
    insertAtBeg(head,3);
    insertAtBeg(head,2);
    printList(head);
    
    insertAtEnd(head,8);
    insertAtEnd(head,9);
    printList(head);

    insertAtPos(head,4,3);
    insertAtPos(head,5,3);


    return 0;
}