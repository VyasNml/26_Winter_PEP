#include <iostream>
using namespace std;

int main(){
    short sh = 15;
    int in = 20; //2^-31 to 2^31
    float fl = 5.5;
    double db = 5.55;
    
    cout << db << "\n";
    
    /*  operators
    Arithematic Operators
    +, -, /, *, %
    
    sh++ -> Post increment
    ++sh -> Pre increment
    sh-- , --sh
    */
   cout << sh++ << endl; // sh incremented from 1 to 2
   cout << sh << endl; 
   
   /*
   Relational Operator
   >, <, >=, <=, ==(comparison)
   */
  
    bool bo = (in==sh);
    cout  << bo << endl;

    // Logical
    // if else
    int age = 25;
    bool hasID = true;

    if(age > 1 && hasID){
        cout << "false" << endl;
    }else{
        cout << "true" << endl;
    }

    //if simple intrest > 50
    double princ,rate,dur,intrest;
    
    princ = 10000;
    rate = 0.05;
    dur = 3; // years

    // cin >> princ >> rate >> dur;
    

    if(princ>5000){
        intrest = (princ*rate*dur);
    }else{
        intrest = 0;
    }
    cout << intrest << endl;
}