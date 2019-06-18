#include<iostream>
using namespace std;
int* f(int * x){
    *x = 15;
    int y = 12;
    int * ptr = &y;
    x = ptr;
    return x;
}
void update(int **ptr){
    int x = 10;
    int *y = &x;
    *ptr = &x;
    **ptr = 15;
    ptr = &y;
}
int sum1(int * arr,int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+= *(arr+i);
    }
    return sum;
}
int main(){
    int x = 10;
    int *y = f(&x);
    cout<<x<<endl;
    cout<<*y<<endl;
    cout<<x<<endl;
}
