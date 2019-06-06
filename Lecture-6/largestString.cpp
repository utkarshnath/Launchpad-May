#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    //cin.get();
    char arr[100];
    for(int i=0;i<n;i++){
        cin.getline(arr,100);
        cout<<arr<<endl;
    }
}
