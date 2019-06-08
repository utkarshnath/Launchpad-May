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

    for(int i=0;i<m;i++){
        //i is even
        if(i%2==0){
            for(int j=0;j<n;j++){
                cout<<arr[j][i];
            }
        }else{
            //i is oad
            for(int j=n-1;j>=0;j--){
                cout<<arr[j][i];
            }
        }
    }
    cout<<endl;
}









