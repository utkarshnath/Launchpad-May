#include<iostream>
using namespace std;
int main(){
    int arr[][5] = {{1,2,3},{4,5,6}};
    cout<<sizeof(arr[0])<<endl;
    cout<<arr<<endl;
    cout<<arr[0]<<endl;
    cout<<&arr[0][0]<<endl;
}
