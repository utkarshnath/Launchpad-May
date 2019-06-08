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
// 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25
    int count = 0;
    int a = 0;
    while(true){
        for(int i=a,j=a;j<m-a;j++){
            cout<<arr[i][j]<<" ";
            count++;
            if(count>=n*m){
                return 0;
            }
        }
        for(int i=a+1,j=m-1-a;i<n-a;i++){
            cout<<arr[i][j]<<" ";
            count++;
            if(count>=n*m){
                return 0;
            }
        }
        for(int i=n-1-a,j=m-2-a;j>=a;j--){
            cout<<arr[i][j]<<" ";
            count++;
            if(count>=n*m){
                return 0;
            }
        }
        for(int i=n-2-a,j=a;i>a;i--){
            cout<<arr[i][j]<<" ";
            count++;
            if(count>=n*m){
                return 0;
            }
        }
        a++;
    }
    cout<<endl;
}










