#include<iostream>
using namespace std;
int main(){
    /*
    int arr[4] = {1,2};
    char arr1[100];
    cout<<sizeof(arr)<<endl;
    cout<<sizeof(arr1)/sizeof(char)<<endl;
    //cout<<arr<<endl;
    cout<<arr<<endl;
    cout<<&arr[0]<<endl;
    cout<<&arr[1]<<endl;
    cout<<&arr[3]<<endl;
    */
    int arr[10];

    for(int i=0;i<10;i++){
        cin>>arr[i];
    }
    for(int i=0;i<10;i++){
        cout<<arr[10-i-1]<<endl;;
    }

}
