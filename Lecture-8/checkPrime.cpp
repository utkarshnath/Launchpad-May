#include<iostream>
using namespace std;
bool isPrime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
void printAllPrime(int n){
    for(int i=2;i<=n;i++){
        if(isPrime(i)){
            cout<<i<<endl;
        }
    }
    return;
}
int main(){
printAllPrime(10);
}







