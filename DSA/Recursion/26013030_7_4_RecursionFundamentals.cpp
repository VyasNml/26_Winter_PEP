#include <iostream>
using namespace std;

void Print(int n){
    if(n==0)return;
    Print(n-1);
    cout << n << " ";
}

void PrintEven(int n){
    if(n==0)return;
    PrintEven(n-1);
    if(!(n&1)){
        cout << n << " ";
    }
}

int Power(int n,int p){
    if(p==0)return 1;
    return n*Power(n,p-1);
}

int main() {
    int n=10;
    // Print(n);

    // PrintEven(n);
    n=2;
    int p = 4;
    cout << Power(n,p) << endl;
    return 0;
}