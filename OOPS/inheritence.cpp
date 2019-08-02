#include<iostream>
using namespace std;
/***
Private members are never inherited (in any type)
public members changes to the  type of inheritence
**/
class A{
    int x;
public:
    A(){
        cout<<"constructor of A"<<endl;
    }
    int y;
};
class B: private A{
public:
    int z;
    B(){
        cout<<"constructor of B"<<endl;
    }
};
int main(){
    B obj;
    obj.z;
    obj.y;
}
