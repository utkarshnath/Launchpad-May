#include<iostream>
using namespace std;
int main(){
int arr[100] = {5,2,7,1,3};
int n = 5;
    for(int i=0;i<n;i++){
        // ith poisition
        int min = arr[i];
        int minINdex = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<min){
                min = arr[j];
                minINdex = j;
            }
        }
        int temp = arr[i];
        arr[i] = min;
        arr[minINdex] = temp;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
