#include<iostream>
using namespace std;
class a{
    int x;
    int y;
public:
    int z;
    static int xyz;
    static int f(){
        cout<<5<<endl;
        return 0;
    }

    a(){
        xyz = 10;
    }
};
int main(){
a obj;
//cout<<a::f()<<endl;
cout<< a::xyz <<endl;
}
