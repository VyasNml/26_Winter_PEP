#include <iostream>
#include <stack>
using namespace std;

void inAtBase(stack<int>& st,int val){
    if(st.empty()){
        st.push(val);
        return;
    }
    int temp = st.top();
    st.pop();
    inAtBase(st,val);
    st.push(temp);
}

void printStack(stack<int> st){
    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}

int main() {
    stack<int> st;

    st.push(5);
    st.push(7);
    st.push(2);
    st.push(3);

    int val = 10;

    printStack(st);
    
    inAtBase(st,val);
    
    printStack(st);
    
    return 0;
}