#include<iostream>
using namespace std;
int main(){
int arr[100] = {5,2,7,1,3};
int n = 5;
for(int i=0;i<n;i++){
    for(int j=0;j<n-i-1;j++){
        // swap
        if(arr[j]>arr[j+1]){
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
        }
    }
}

for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
}
