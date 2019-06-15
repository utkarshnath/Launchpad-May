#include<iostream>
using namespace std;
void merge(int arr[],int start1,int start2,int end){
    int temp[100];
    int s1 = start1;
    int e1 = start2-1;
    int s2 = start2;
    int e2 = end;
    int k = 0;
    while(s1<=e1 && s2<=e2){
        if(arr[s1]<arr[s2]){
            temp[k++] = arr[s1++];
        }else{
            temp[k++] = arr[s2++];
        }
    }
    while(s1<=e1){
        temp[k++] = arr[s1++];
    }
    while(s2<=e2){
        temp[k++] = arr[s2++];
    }
    k = 0;
    for(int i=start1;i<=end;i++){
        arr[i] = temp[k++];
    }
    return;
}
void mergeSort(int arr[],int start,int end){
    if(start>=end){
        return;
    }
    int mid = (start+end)/2;
    mergeSort(arr,start,mid);
    mergeSort(arr,mid+1,end);
    merge(arr,start,mid+1,end);
    return;
}
int main(){
    int arr[100] = {5,7,3,1,8,2};
    mergeSort(arr,0,5);
    for(int i=0;i<6;i++){
        cout<<arr[i]<<endl;
    }
}
