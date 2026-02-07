#include <iostream>
#include <stack>
using namespace std;

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
    
    return 0;
}