#include<iostream>
using namespace std;
int main(){
int arr[100] = {5,2,7,1,3};
int n = 5;
for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
        //cout<<arr[i]<<" "<<arr[j]<<endl;
        for(int k=i;k<=j;k++){
            cout<<arr[k]<<" ";
        }
        cout<<endl;
    }
}
}





