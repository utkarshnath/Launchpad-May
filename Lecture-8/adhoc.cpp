#include<iostream>
using namespace std;
int f(int &n){
    cout<<&n<<endl;
    n--;
    return n;
}
int main(){
int n = 5;
cout<<&n<<endl;
f(n);
n--;
cout<<n<<endl;
}
