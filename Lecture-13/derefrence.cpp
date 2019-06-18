#include<iostream>
using namespace std;
int main(){
    int* y = 0;
    cout<<*y<<endl;
    int x = 10;
    int * ptr = &x;
    int ** ptr1 = &ptr;
    cout<<x<<endl;
    cout<<*ptr<<endl;
    cout<<&ptr<<endl;
    //cout<<**ptr<<endl; // not possible
    cout<<*ptr1<<endl;
    cout<<&ptr1<<endl;
    cout<<**ptr1<<endl;
}
