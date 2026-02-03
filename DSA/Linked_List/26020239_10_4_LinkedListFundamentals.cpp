#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int x){data=x;next = nullptr;}
    Node(int x,Node* nxt){data=x;next = nxt;}
};
    
    
    
void insertAtBegin(Node* (&head), int value){
    Node* newNode = new Node(value);
    if(head!=nullptr){
        newNode->next = head;
    }
    head = newNode;
}

void insertAtEnd(Node* (&head), int value){
    Node* temp = head;
    while(temp->next!=nullptr){
        temp = temp->next;
    }
    Node* newNode = new Node(value);
    temp->next = newNode;
    return;
}

void insertAtPos(Node* (&head), int value,int pos){
    if(pos<=1){
        insertAtBegin(head,value);
        return;
    }
    Node* temp = head;
    Node* newNode = new Node(value);
    for(int i=1;i<pos-1;i++){
        if(temp==nullptr){
            insertAtEnd(head,value);
            return;
        }
        temp = temp->next;        
    }
    newNode->next = temp->next;
    temp->next = newNode;
    return;
}

void deleteAtBeg(Node* (&head)){
    head = head->next;
}

void deleteAtEnd(Node* (&head)){
    Node* temp = head;
    while(temp->next->next!=nullptr){
        temp = temp->next;
    }
    temp->next = nullptr;
}

void printLL(Node* head){
    Node* temp = head;
    while(temp!=nullptr){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
    
int main(){
    Node* head = nullptr;
    insertAtBegin(head,2);
    insertAtBegin(head,1);
    
    insertAtEnd(head,7);
    insertAtEnd(head,8);
    
    insertAtPos(head,5,3);
    insertAtPos(head,4,3);

    printLL(head);

    return 0;
}
