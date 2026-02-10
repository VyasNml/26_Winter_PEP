#include <iostream>
#include <stack>

using namespace std;

void deleteMid(stack<int> *st,int h){
    // if(h==0)st.pop();
    // int val = st.top();
    deleteMid(st,h-1);
    // st.push(val);
}

int main() {
    stack<int> st;
    st.push(1);
    st.push(3);
    st.push(5);
    st.push(2);
    st.push(8);

    deleteMid(&st,st.size()/2);

    return 0;
}