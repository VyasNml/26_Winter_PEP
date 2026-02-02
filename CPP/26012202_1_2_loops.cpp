#include <iostream>
using namespace std;

int main() {

    //Loops
    // for  while   do-while
    //scope of loop -> same variable name of same type will not give error in different scope 
    int i=0;
    for(int i=0;i<5;i++){
        cout << i << " ";
    }
    cout << "\n" << i << endl;

    cout << endl;
    // O(n) complexity
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout << i << "-" << j <<endl;
        }
    }
cout << endl;
cout << "pattern printing\n" << endl;
cout << "Rectangles"<<endl;
for(int i=0;i<5;i++){
    for(int j=0;j<4;j++){
        cout << "* ";
    }
    cout << endl;
}
cout << endl;
for(int i=0;i<5;i++){
    for(int j=0;j<4;j++){
        if(i==0 || j==0 || j==3 || i==4){
            cout << "* ";
            }else{
                cout << "  ";
            }
        }
        cout << endl;
    }
cout << "\nTriangle"<<endl;
    int n = 5;
    for(int i=0;i<n;i++){    
        for(int j=0;j<n-i;j++){
            cout << "  ";
        }
        for(int j=0;j<i;j++){
            cout << "* ";
        }
        for(int j=0;j<i-1;j++){
            cout << "* ";
        }
        cout << endl;
    }
    cout <<endl;
//WHILE LOOP
    i=0;
    while(i<n){
        cout << i;
        i++;
    }

    //keep asking pin until a valid one is entered
    int pin=123;
    int entry;
    while(pin!=entry){
        cout << "Enter pin(enter 123): ";
        cin >> entry;
        if(pin==entry){
            cout << "Access Granted";
        }
    } 
    
    return 0;
}