#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[5];
    cout<<&arr[100];
    int k;
    cin>>k;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]==k){
            cout<<"found";
            return 0;
        }
    }
    cout<<"not found";

}
