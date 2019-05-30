#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=2;
    while(i<n){
        //check if i is prime or not
        int j=2;
        bool isPrime = true;
        while(j<i){
            if(i%j==0){
                isPrime = false;
            }
            j++;
        }
        if(isPrime==true){
            cout<<i<<endl;
        }
        i++;
    }
}
