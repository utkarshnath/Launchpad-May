#include<iostream>
using namespace std;
void merge(int arr[],int start1,int start2,int end){
    int temp[100000];
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
void bubbleSort(int arr[],int n){
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
}
int main(){
int arr[10000] = {0};
int n = 10000;
clock_t start = clock();
//bubbleSort(arr,n);
mergeSort(arr,0,n-1);
clock_t end = clock();
cout<<end-start<<endl;
//mergeSort(arr,0,n-1);
}




