#include <iostream>
using namespace std;

// struct Node {
//     int data;
//     Node* next;
//     Node(int val) {
//         data = val;
//         next = NULL;
//     }
// };

class Node {
    public:
        int data;
        Node* next;
        Node(int val) {
            data = val;
            next = NULL;
        }
};

Node* insertAtEnd(Node* head, int val) {
    Node* newNode = new Node(val);
    if (head == NULL) return newNode;
    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
    return head;
}

void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = NULL;
    int n, x;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        head = insertAtEnd(head, x);
    }

    printList(head);

    

    return 0;
}