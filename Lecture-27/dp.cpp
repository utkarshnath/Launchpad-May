#include<iostream>
using namespace std;
int arr[1000];
// This is memoization
int fibo(int n){
    if(n==0){
        arr[n] = n;
        return 0;
    }
    if(n==1){
        arr[n] = n;
        return 1;
    }
    if(arr[n]!=-1){
        return arr[n];
    }else{
        int x =  fibo(n-1)+fibo(n-2);
        arr[n] = x;
        return x;
    }
}
int fiboDp(int n){
    int arr[100];
    arr[0] = 0;
    arr[1] = 1;
    for(int i=2;i<=n;i++){
        arr[i] = arr[i-1]+arr[i-2];
    }
    return arr[n];
}

int main(){
    for(int i=0;i<1000;i++){
        arr[i] = -1;
    }
    cout<<fibo(4)<<endl;
}
