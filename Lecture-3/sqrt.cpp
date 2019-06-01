#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    /*
    float i=0;
    while(i*i<=n){
            cout<<i<<endl;
        i = i+0.1;
    }
    cout<<i-0.1<<endl;
    */
    int i=0;
    float j = 0;
    float inc = 1;
    while(i<3){
        while(j*j<=n){
            j = j+inc;
            cout<<j<<endl;
        }
        j = j - inc;
        inc = inc/10;
        i = i+1;
    }
    cout<<j<<endl;
}








