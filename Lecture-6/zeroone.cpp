#include<iostream>
using namespace std;
int main(){
int arr[10] = {1,1,1,1,1,1,0};
int start = 0;
int end = 6;
while(start<end){
    while(arr[start]==0){
        start++;
    }
    while(arr[end]==1){
        end--;
    }
    if(start<end){
        arr[start] = 0;
        arr[end] = 1;
        start++;
        end--;
    }
}
for(int i=0;i<7;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
}
