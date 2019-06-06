#include<iostream>
using namespace std;
int main(){
    char arr[100];
    cin.getline(arr,100);
    int i=0;
    for(i=0;arr[i]!=0;i++);
    cout<<arr<<endl;
    cout<<i<<endl;
}

