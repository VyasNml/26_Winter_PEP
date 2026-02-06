//H. Inverted Pyramid 
// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/H

#include <iostream>
using namespace std;

void spacePrint(int n){
    if(n==0)return;
    cout << " ";
    spacePrint(n-1);
}

void starPrint(int n){
    if(n==0)return;
    cout << "*";
    starPrint(n-1);
}


int main() {
    int n;
    cin >> n;
    for(int i=n;i>0;i--){
        spacePrint(n-i);
        starPrint(i);
        starPrint(i-1);
        
        cout << endl;
    }
    return 0;
}