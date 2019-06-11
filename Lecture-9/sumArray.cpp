#include<iostream>
using namespace std;
//function magically returns sum starting from i
int sumArray(int arr[],int n,int i){
    if(i==n-1){
        return arr[n-1];
    }
    int right = sumArray(arr,n,i+1);
    return arr[i]+right;
}
int main(){

}
