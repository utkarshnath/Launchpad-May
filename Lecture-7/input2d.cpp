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
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Input k"<<endl;
    int k;
    cin>>k;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==k){
                cout<<"found"<<endl;
                return 0;
            }
        }
    }
    cout<<"Not found"<<endl;
}




