#include<iostream>
using namespace std;

class A {
public:
    virtual void print () {
         cout<< "print base class" <<endl;
    }

    void show () {
        cout<< "show base class" <<endl;
    }
};

class B:public A
{
public:
    void print () {
        cout<< "print derived class" <<endl;
    }

    void show () {
        cout<< "show derived class" <<endl;
    }
};

int main()
{
    A *ptr;
    B obj;
    ptr = &obj;

    //virtual function, binded at runtime
    ptr->print();

    // Non-virtual function, binded at compile time
    ptr->show();

}
