#include<iostream>
using namespace std;
int factorial(int n){
    int i=1;
    for(int j=1;j<=n;j++){
        i*=j;
    }
    return i;
}
int ncr(int n,int r){
    return factorial(n)/(factorial(n-r)*factorial(r));
}
int main(){
int x;
cin>>x;
cout<<factorial(x)<<endl;

}
