#include <iostream>
using namespace std;

/*
class class_name{
    datatype var;
    functioins();
};
*/
//Constructor


class Car{
    // Class do not use memory, only object use memory
    public:
        int speed;
        int window;
        int seat;
        string name;
        string color;

    Car(){//constructor -> 
        //have same name as class
        //No return type
        //called automatically
        cout << "Default constructor method" << endl;
    }
    Car(string name){//parameterised constructor
        this->name = name;//this keyord -> points to the instance of current object
    }


    void speedInc(){
        speed += 10;
    }
};

class Student{
    public:
        string name;
        string cls;
        string course;
        Student(string name,string cls,string course){
            this->name = name;
            this->cls = cls;
            this->course = course;
        }
};

int main() {
    Car c1("car_1");
    c1.speed = 120;
    c1.window = 4;
    c1.seat = 5;

    cout << c1.name<<endl;

    Student *ptr1 = new Student("abc","def","ghi");
    cout << ptr1->name << endl;
    cout << ptr1->cls << endl;
    cout << ptr1->course << endl;
    return 0;
}