#include<iostream>
using namespace std;

void merge(int arr1[],int arr2[],int n,int m){
    int i=0,j=0,k=0;
    int temp[100];
    while(i<n && j<m){
        if(arr1[i]< arr2[j]){
            temp[k++] = arr1[i++];
        }else{
            temp[k++] = arr2[j++];
        }
    }
    while(i<n){
        temp[k] = arr1[i];
        k++;
        i++;
    }
    while(j<m){
        temp[k] = arr2[j];
        k++;
        j++;
    }
    for(int i=0;i<k;i++){
        cout<<temp[i]<<" ";
    }
    cout<<endl;
    return;
}
int main(){
int arr1[10] = {1,5,10,12};
int arr2[10] = {2,6,7,15,18,20};
merge(arr1,arr2,4,6);
}






