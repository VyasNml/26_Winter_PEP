#include <iostream>
using namespace std;

void printDig(int n){
    if(n<=0)return;
    printDig(n/10);
    if(n/10!=0){
            cout << " ";
    }
    cout << n%10 ;
}

int main() {
    int T;
    cin >> T;
    for(int f=0;f<T;f++){
        int n;
        cin >> n;
        if(n==0){
            cout << 0;
        }else{
            printDig(n);
        }
        cout << endl;
    }
    return 0;
}