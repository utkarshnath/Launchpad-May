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
};
void complex::print(){
        cout<<real<<" + i"<<img<<endl;
}
void complex::setReal(float real){
    getReal();
}
complex complex::operator~()
{
	complex temp_complex;
	temp_complex.real=real;
	temp_complex.img=-1*img;
	return temp_complex;
}
int main(){
    complex c(3,5);
    c.print();

}
