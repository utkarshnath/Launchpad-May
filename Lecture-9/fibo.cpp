#include<iostream>
using namespace std;
// this function magically provides nth fibo term
int fibo(int n){
    if(n==1){
        return 0;
    }
    if(n==2){
        return 1;
    }

    int a = fibo(n-1);
    int b = fibo(n-2);
    return a+b;
}
int main(){
cout<<fibo(5)<<endl;
}
