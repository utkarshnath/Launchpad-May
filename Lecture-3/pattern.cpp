#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        // ith row
        int j=0;
        while(j<n-i){
            cout<<" ";
            j = j+1;
        }
        j = i;
        while(j<=2*i-1){
            cout<<j;
            j = j+1;
        }
        j = 2*i-2;
        while(j>=i){
            cout<<j;
            j = j-1;
        }
        cout<<endl;
        i = i+1;
    }
}
