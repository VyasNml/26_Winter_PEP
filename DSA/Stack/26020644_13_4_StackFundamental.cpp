#include <iostream>
#include <stack>
using namespace std;

#define MAX 10

struct Stack {
    int top;
    int arr[MAX];
    Stack() {
        this->top = -1;
    }
};

bool isEmpty(Stack* st) {
    if (st->top < 0) {
        return true;
    } else {
        return false;
    }
}

bool isFull(Stack* st) {
    if (st->top >= MAX - 1) {
        return true;
    } else {
        return false;
    }
}

void push(Stack* st, int val) {
    if (isFull(st)) {
        cout << "Stack overflow\n";
        return;
    }
    st->arr[++st->top] = val;
}

void pop(Stack* st) {
    if (isEmpty(st)) {
        cout << "Stack underflow\n";
        return;
    }
    st->top--;
}

void printStack(Stack* st) {
    int t = st->top;
    while (t >= 0) {
        cout << st->arr[t--] << " ";
    }
    cout << endl;
}

int main() {
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);

    cout << "Top Element is : " << st.top() << endl;
    
    st.pop();
    
    cout << "Top Element is : " << st.top() << endl;

    cout << st.size() << endl;

    if(st.empty())cout << "is empty" << endl;
    else cout << "not empty";

    Stack* sta = new Stack();
    int n, x;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        push(sta, x);
    }
    
    printStack(sta);
    
    
    return 0;
}