#include<iostream>
using namespace std;
/***static members are only declared in class declaration, not defined.
They must be explicitly defined outside the class using scope resolution operator.

A static function is a member function of a class that can be called even
when an object of the class is not initialized.
A static function cannot access any variable of its class except for static variables.
**/
class student{
    char name;
    int roll;
    static int batchStrength;

public:
    student(){
        name = 'A';
        roll = 5;
        batchStrength++;
    }
    static int getbatchStrength(){
        return batchStrength;
    }

};
int student::batchStrength = 0;
int main(){
    student A,B,C;
    cout<<student::getbatchStrength();
}


