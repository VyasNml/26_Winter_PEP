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

int main() {
    int n=10;
    // Print(n);

    PrintEven(n);
    return 0;
}