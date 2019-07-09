#include<iostream>
using namespace std;
class complex{
    float real;
    float img;
public:
    complex(){

    }
    complex(float real,float img){
        this->real = real;
        this->img = img;
    }
    void print();
    void setReal(float real);
    float getReal();
    complex operator~();
    complex operator+(complex c);
};
void complex::print(){
        cout<<real<<" + i"<<img<<endl;
}
void complex::setReal(float real){
    //getReal();
}
complex complex::operator~(){
        complex temp_complex;
        temp_complex.real=real;
        temp_complex.img=-1*img;
        return temp_complex;
    }
complex complex::operator+(complex c){
    complex temp_complex;
    temp_complex.real = real+c.real;
    temp_complex.img = img+c.img;
    return temp_complex;
}

int main(){
    complex c(3,5);
    complex c1(5,3);
    c.print();
    c = ~c;
    c = c+c1+c1;
c.print();
}
