#include <iostream>
using namespace std;

// void printDig(int n){
//     if(n<=0)return;
//     printDig(n/10);
//     if(n/10!=0){
//             cout << "<>";
//     }
//     cout << n%10 ;
// }

// int main() {
    //     int n;
    //     cin >> n;
    //     if(n==0){
        //         cout << 0;
        //         return 0;
        //     }
        //     printDig(n);
        
        //     return 0;
        // }
        
void printDig(int n){
    if(n<=10)return;
    printDig(n/10);
    if(n/10!=0){
        cout << "<>";
    }
    cout << n%10 ;
}

int main(){
    int n = 12345;
    // cin >> n;
    if(n==0){
        cout << 0;
        return 0;
    }
    cout << n%10;
    printDig(n);

    return 0;
}

//12345
//1<>2<>3<>4<>5