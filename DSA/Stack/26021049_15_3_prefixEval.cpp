#include <iostream>
#include <stack>
using namespace std;

bool isOperator(char ch){
    return (ch=='+' || ch=='-' || ch=='*'|| ch=='/'|| ch=='^');
}

int prefixEval(string s){
    stack<char> st;
    for(char ch:s){
        if(!isOperator(ch)){
            st.push(ch);
        }else{
            // if(st.empty())
            int a = stoi(to_string(st.top()));
            st.pop();

            int b = stoi(to_string(st.top()));
            st.pop();
            
        }
    }

}

int main() {
    
    return 0;
}