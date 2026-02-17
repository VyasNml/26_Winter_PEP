#include <iostream>
using namespace std;

struct ListNode {
  int val;
   ListNode* next;
   ListNode(int x) : val(x), next(nullptr) {}
};

ListNode* reverseList(ListNode* head){
    ListNode* prev = nullptr;
    ListNode* curr = head;
    ListNode* next = nullptr;

    while(curr){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}



ListNode* addTwoNumbers(ListNode* l1, ListNode* l2, int k) {
    ListNode* node1 = reverseList(l1);
    ListNode* node2 = reverseList(l2);
    int carry = 0;
    ListNode* newNode = new ListNode(0);
    ListNode* head = newNode;
    while(node1!=NULL || node2!=NULL){
        int digitSum = 0;
        if(node1!=NULL){
            digitSum+= node1->val;
            node1 = node1->next;
        } 
        if(node2!=NULL){
            digitSum+= node2->val;
            node2= node2->next;
        } 
            digitSum+=carry;
            carry = digitSum/10;
            int digit = digitSum%10;

            ListNode* newDigitNode = new ListNode(digit);
            newNode->next = newDigitNode;
            newNode = newNode->next;
    }
     if(carry){
            ListNode* newDigitNode = new ListNode(carry);
            newNode->next = newDigitNode;
            newNode = newNode->next;
    }
    head->next = reverseList(head->next);

    newNode = head->next;

    while(newNode!=NULL){
        int digitVal = newNode->val;
        digitVal *= k;
        digitVal %= 10;

        newNode->val = digitVal;
        newNode = newNode->next;
    }

    return head->next;;

}



void printList(ListNode* head){
    while(head){
        cout << head->val;
        if(head->next) cout << " -> ";
        head = head->next;
    }
    cout << endl;
}

int main(){
    int n1, n2;
    
    // First list
    cin >> n1;
    ListNode* l1 = nullptr;
    ListNode* tail1 = nullptr;

    for(int i = 0; i < n1; i++){
        int x;
        cin >> x;
        ListNode* node = new ListNode(x);
        if(!l1){
            l1 = node;
            tail1 = node;
        } else {
            tail1->next = node;
            tail1 = tail1->next;
        }
    }

    // Second list
    cin >> n2;
    ListNode* l2 = nullptr;
    ListNode* tail2 = nullptr;

    for(int i = 0; i < n2; i++){
        int x;
        cin >> x;
        ListNode* node = new ListNode(x);
        if(!l2){
            l2 = node;
            tail2 = node;
        } else {
            tail2->next = node;
            tail2 = tail2->next;
        }
    }

    int k;
    cin >> k;   // multiplier

    ListNode* result = addTwoNumbers(l1, l2, k);

    // Print result
    while(result){
        cout << result->val;
        if(result->next) cout << " ";
        result = result->next;
    }
    cout << endl;

    return 0;
}
