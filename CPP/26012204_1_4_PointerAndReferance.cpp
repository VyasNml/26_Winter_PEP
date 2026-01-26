#include <iostream>
using namespace std;

int main() {
    int a = 5;      //variable
    int &ref = a;   //referance
    int *ptr = &a;  //pointer -> (size:8 bytes)
    int **pt = &ptr;


    cout << "a :" << a << endl;         //variable - give value
    cout << "&ref :" << &ref << endl;   //address in referance - give address
    cout << "ref :" << ref << endl;     //referance - give value
    cout << "ptr :" << ptr << endl;     //pointer - give address
    cout << "*ptr :" << *ptr << endl;   //dereferanced pointer - give value
    cout << "pt :" << pt << endl;       //pointer to pointer - give address
    cout << "**pt :" << **pt << endl;   //dereferanced pointer to pointer - give value
    


    cout <<"-----"<<endl;

    cout <<"Q2"<<endl;
    int x = 10;
    int *p = &x;
    ++*p; 
    cout << x << endl; //gives 20, value updated via dereferanced pointer
    
    return 0;
}