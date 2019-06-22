#include<iostream>
using namespace std;
void f(int n){
      static int i = 10;
      cout<<&i<<endl;
    i = i-1;
    cout<<n<<" "<<i<<endl;
    if(n==0){
        return;
    }
    f(n-1);
}
void f1(){
    static int i;
    i = 10;
    i--;
    cout<<i<<endl;
}
int main(){
    static int x = 10;
    //f(10);
    f1();
    f1();
    f1();
    f1();

    /*
    const int x = 10;
    cout<<x<<endl;
    */
}
