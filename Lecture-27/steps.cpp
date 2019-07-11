#include<iostream>
using namespace std;
int steps(int n){
    if(n==1){
        return 0;
    }
    int a = INT_MAX;
    int b = INT_MAX;
    int c = INT_MAX;
    if(n%3==0){
        a = steps(n/3);
    }
    if(n%2==0){
        b = steps(n/2);
    }
    c = steps(n-1);
    return min(a,min(b,c))+1;
}

int main(){
    cout<<steps(10)<<endl;
}
