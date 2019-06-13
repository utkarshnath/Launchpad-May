#include<iostream>
using namespace std;
bool binarySearch(int arr[],int n,int k){
    int start = 0;
    int end = n-1;
    int mid = (start+end)/2;
    while(start<=end){
        if(arr[mid]==k){
            return true;
        }
        if(arr[mid]>k){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
        mid = (start+end)/2;
    }
    return false;
}
int main(){
    int arr[10] = {5,7,16,18,20,25};
    cout<<binarySearch(arr,6,7)<<endl;;
    cout<<binarySearch(arr,6,5)<<endl;
    cout<<binarySearch(arr,6,15)<<endl;
}
