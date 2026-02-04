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
    if(head==nullptr){
        insertAtBegin(head,value);
        return;
    }
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
    if(head==nullptr)return;
    Node* temp = head;
    head = head->next;
    delete temp;
}

void deleteAtEnd(Node* (&head)){
    Node* temp = head;
    while(temp->next->next!=nullptr){
        temp = temp->next;
    }
    Node* node = temp->next;
    delete node;
    temp->next = nullptr;
}

void deleteAtPos(Node* (&head),int pos){
        if(pos<=1){
            deleteAtBeg(head);
            return;
        }
        Node* temp = head;
        for(int i=1;i<pos-1;i++){
            if(temp->next==nullptr){
                deleteAtEnd(head);
                return;
            }
            temp = temp->next;        
        }
        if(temp->next==nullptr){
            return;
        }
        temp->next = temp->next->next;
}

void printLL(Node* head){
    Node* temp = head;
    while(temp!=nullptr){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

bool searchLL(Node* head,int key){
    if(head==nullptr)return false;
    if(head->data==key)return true;
    return searchLL(head->next,key);
}

    
int main(){
    Node* head = nullptr;
    insertAtEnd(head,33);
    insertAtEnd(head,42);
    insertAtEnd(head,18);
    insertAtEnd(head,11);
    insertAtEnd(head,17);
    
    printLL(head);
    int key = 18;
    cout << searchLL(head,key);
    return 0;
}