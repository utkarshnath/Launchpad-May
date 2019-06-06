#include<iostream>
using namespace std;
int main(){
    char arr1[100];
    char arr2[100];
    cin.getline(arr1,100);
    cin.getline(arr2,100);
    int i=0;
    int j=0;
    for(i=0;arr1[i]!=0;i++);
    for(j=0;arr2[j]!=0;j++){
        arr1[i] = arr2[j];
        i++;
        if(j==3){
            arr1[i-1] = 0;
        }
    }
    arr1[i] = 0;
    cout<<arr1<<endl;
}
