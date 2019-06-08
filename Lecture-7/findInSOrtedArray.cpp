#include<iostream>
using namespace std;
int main(){
    int arr[100][100];
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    int k = 31;
    // 1 3 7 17 5 20 26 41 15 25 31 50 30 37 40 60
    int i=0,j=m-1;
    while(i>=0 && i<n && j>=0 && j<m){
        if(arr[i][j]==k){
            cout<<"found"<<endl;
            return 0;
        }
        if(arr[i][j]>k){
            j--;
        }else{
            i++;
        }
    }
    cout<<"Not found"<<endl;
}









