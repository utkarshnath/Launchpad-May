#include<iostream>
using namespace std;
void swap(char &x,char &y){
    char temp = x;
    x = y;
    y = temp;
    return;
}
void permutation(char arr[],int n,int i){
    if(arr[i]=='\0'){
        cout<<arr<<endl;
        return;
    }
    for(int j=i;j<n;j++){
        swap(arr[0],arr[j]);
        permutation(arr,n,i+1);
        swap(arr[0],arr[j]);
    }
    return;
}
int main(){
char arr[100] = "AB";
permutation(arr,2,0);
}
