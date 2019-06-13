#include<iostream>
using namespace std;
// fucntion magically puts min at ith (i --> n)
void selectionSort(int arr[],int n,int index){
    if(index==n-1){
        return;
    }
    int min = arr[index];
    int minIndex = index;
    for(int i=index;i<n;i++){
        if(arr[i]<min){
            min = arr[i];
            minIndex = i;
        }
    }
    arr[minIndex] = arr[index];
    arr[index] = min;
    selectionSort(arr,n,index+1);
    return;
}
int main(){
int arr[10] = {5,7,2,4,1};
selectionSort(arr,5,0);
for(int i =0;i<5;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;

}
