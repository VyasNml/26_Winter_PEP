#include <iostream>
using namespace std;

int Fibo(int n){
    if(n==0)return 0;
    if(n==1)return 1;
    return Fibo(n-1)+Fibo(n-2);
}

int main() {
    int n = 5;
    // cin >> n;

    // 0 1 2 3 4 5 6 7  8  9
    // 0 1 1 2 3 5 8 13 21 34
    cout << Fibo(n);

    return 0;
}