#include<iostream>
using namespace std;
int main(){
    int arr[100];
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }
    int max = INT_MIN;
    for(int i=0;i<10;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    cout<<max<<endl;
}
