//https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/A
#include <iostream>
using namespace std;

void printRec(string &str,int n){
    if(n==0)return;
    cout << str << endl;
    printRec(str,n-1);
}

int main() {
    string str = "I love Recursion";
    int n;
    cin >> n;
    printRec(str,n);
    return 0;
}