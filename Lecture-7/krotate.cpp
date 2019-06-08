#include<iostream>
using namespace std;
int main(){
    char arr[100];
    cin.getline(arr,100);
    int n = strlen(arr);
    int k;
    cin>>k;
    for(int i=n;i>=0;i--){
        arr[i+k] = arr[i];
    }
    for(int i=0;i<k;i++){
        arr[i] = arr[n+i];
    }
    arr[n] = 0;
    cout<<arr<<endl;
}
