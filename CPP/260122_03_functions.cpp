#include <iostream>
using namespace std;

/*
return_type function_name(datatype parameter_1,datatype parameter_2){
    ----
    return value;
}

function_call(argument_1,argument_2);
*/

//Q1
void hello(){
    cout << "Hello" << endl;
}

void hello2(){
    hello();
}

int Q1() {
    // hello();
    hello2();
    return 0;
}
// Here if we call hello2() within hello(), it ill give a error in c++.
// Order of declaration matters in c++, but not in java, it works in java

//Q2
int add(){
    return 10;
}

void Q2(){
    cout << add() * 10 << endl; //wont give error when datatypes dont clash
}

//Q3
string conc(){
    return "abcd";
}

void Q3(){
    cout << conc() + "efgh" << endl;
}

//Q4
float floatsub(float b,float a){
    float ans = b-a;
    return ans;
}

void Q4(){
    float a = 1.03;
    float b = 1.05;
    
    cout << floatsub(b,a) << endl;
    printf("%.02f\n",floatsub(b,a));
}

int main(){
    cout << "\nQ1\n";
    Q1();
    cout << "\nQ2\n";
    Q2();
    cout << "\nQ3\n";
    Q3();
    cout << "\nQ4\n";
    Q4();
}

//
//pointers
//pass by value and referance