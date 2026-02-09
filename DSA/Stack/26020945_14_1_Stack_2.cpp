#include <iostream>
using namespace std;

class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        next = nullptr;
    }
};

class MyStack{
    public:
        Node* top;
        MyStack(){
            Node* top = nullptr;
        }

        bool isEmpty(MyStack* st){
            return (st->top == nullptr);
        }

        void push(int value){
            Node* newNode = new Node(value);
            newNode->next = top;
            this->top = newNode;
        }

        void pop(){
            if(isEmpty(this)){
                cout << "Stack Underflow";
            }else{
                Node* temp = this->top;
               this->top =this->top->next;
               delete temp; 
            }
        }

        int peek(){
            if(!isEmpty(this))return this->top->val;
        }
};


int main() {
    Node* node = new Node(0);
    MyStack st;
    st.push(10);
    st.peek();
    st.push(20);
    st.peek();
    st.push(30);
    st.peek();
    st.push(40);
    st.peek();
    
    
    return 0;
}