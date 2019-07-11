#include<iostream>
using namespace std;
class a{
    int x;
    int y;
public:
    int z;
    int aa;
    int f(){
        cout<<x<<endl;
    }
};
class b: private a{
    int q;
    int f1(){
        cout<<z<<endl;
    }
};
int main(){
a obj1;
cout<<obj1.z<<endl;

b obj2;
//cout<<obj2.x<<endl;

}
