#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    int n1 = (n+1)/2;
    while(i<=n1){
        // for ith row
        int j=0;
        while(j<n1-i){
            cout<<" ";
            j = j+1;
        }
        j=0;
        while(j<2*i-1){
            cout<<"*";
            j = j+1;
        }
        cout<<endl;
        i = i+1;
    }
    // 2nd part
    int n2 = (n-1)/2;
    i=1;
    while(i<=n2){
        // ith row
        int j=0;
        while(j<i){
            cout<<" ";
            j = j+1;
        }
        j=0;
        while(j<n-2*i){
            cout<<"*";
            j = j+1;
        }
        cout<<endl;
        i = i+1;
    }
}
