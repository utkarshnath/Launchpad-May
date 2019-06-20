#include<iostream>
using namespace std;
int * f(){
    int * ptr = new int[1000000];
    int x = 90;
    ptr = &x;
    *ptr  = 10;
    return ptr;
}
int main(){
f();
cout<<*ptr<<endl;
}
