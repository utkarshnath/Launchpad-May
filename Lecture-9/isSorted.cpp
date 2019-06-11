#include<iostream>
using namespace std;
// this function magically checks array is sorted or not starting from i
bool isSorted(int arr[],int n,int i){
    if(i==n-1){
        return true;
    }
    bool right = isSorted(arr,n,i+1);
    if(right && arr[i]<arr[i+1]){
        return true;
    }
    return false;
}
int main(){

}
