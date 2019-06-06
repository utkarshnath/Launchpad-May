#include<iostream>
using namespace std;
int main(){
    char arr[100];

    cin.getline(arr,100,"wef");
    /*
    int i=0;
    char ch = cin.get();
    for(;ch!='\n';i++){
        arr[i] = ch;
        ch = cin.get();
    }
    arr[i] = '\0';
    arr[i] = 0;
    arr[i] = NULL;
    */
    cout<<arr<<endl;

}
