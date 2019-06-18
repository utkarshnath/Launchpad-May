#include<iostream>
using namespace std;
void f(int * arr,int n){
    for(int i=0;i<n;i++){
        //cout<<arr[i]<<endl;
        cout<<i[arr]<<endl;
        cout<<*(arr+i)<<endl;
    }
    return;
}
int main(){
    int arr[100] = {1,2,3,4,5};
    int * x = arr;
    cout<<x<<endl;
    cout<<arr<<endl;
    f(arr,5);

}
