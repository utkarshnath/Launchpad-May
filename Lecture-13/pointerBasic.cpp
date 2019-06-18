#include<iostream>
using namespace std;
int main(){
    char ch = 'A';
    char * ptr = &ch;
    //int * ch1 = (int *)&ch;
    void * ch1 = (void *)&ch;
    cout<<ch1<<endl;
    //cout<<ch1+1<<endl;

    char arr[100] = "abcdefghijklm";
    cout<<&arr<<endl;
    int * ch2 = (int *)arr;
    cout<<ch2<<endl;


    /*
    int x;
    int * ptr = &x;
    cout<<&x<<endl;
    cout<<ptr<<endl;
    cout<<ptr+1<<endl;
    cout<<&ptr<<endl;
    int ** y = &ptr;
    cout<<y<<endl;
    cout<<y+1<<endl;
    char ch = 'A';
    char * ptr1 = &ch;
    cout<<sizeof(ptr)<<endl;
    cout<<sizeof(ptr1)<<endl;
    cout<<&ch<<endl;
    cout<<ptr1<<endl;
    */
}
