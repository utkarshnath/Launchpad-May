#include<iostream>
using namespace std;
int main(){
    int x = 10;
    cout<<&x<<endl;
    char arr[100];
    //char ch = &arr[0];
    cout<<sizeof(&arr[0])<<endl;
    cout<<arr<<endl;
    //cout<<ch<<endl;
}
