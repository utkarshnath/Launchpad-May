#include<iostream>
using namespace std;
bool isSafe(int arr[100][100],int n,int x,int y){
    for(int i=x,j=y;i>=0;i--){
        if(arr[i][j]){
            return false;
        }
    }
    for(int i=x,j=y;i<n;i++){
        if(arr[i][j]){
            return false;
        }
    }
    for(int i=x,j=y;j<n;j++){
        if(arr[i][j]){
            return false;
        }
    }
    for(int i=x,j=y;j>=0;j--){
        if(arr[i][j]){
            return false;
        }
    }
    for(int i=x,j=y;i>=0 && j<n;i--,j++){
        if(arr[i][j]){
            return false;
        }
    }
    for(int i=x,j=y;i<n && j<n;i++,j++){
        if(arr[i][j]){
            return false;
        }
    }
    for(int i=x,j=y;i<n && j>=0;i++,j--){
        if(arr[i][j]){
            return false;
        }
    }
    for(int i=x,j=y;i>=0 && j>=0;i--,j--){
        if(arr[i][j]){
            return false;
        }
    }
    return true;
}
bool isSafe2(int arr[100][100],int n,int x,int y){
    int dir[8][2] = {{1,0},{1,1},{0,1},{-1,-1},{-1,0},{0,-1},{-1,1},{1,-1}};
    for(int k=0;k<8;k++){
        for(int i=x,j=y; i>=0 && i<n && j>=0 && j<n; i+=dir[k][0],j+=dir[k][1]){
            if(arr[i][j]){
                return false;
            }
        }
    }
    return true;
}
int nqueens(int arr[100][100],int n,int x,int y){
    if(y==n){
        cout<<"******************************************"<<endl;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<"******************************************"<<endl;
        return 1;
    }
    int sum = 0;
    for(int i=0;i<n;i++){
        if(isSafe2(arr,n,i,y)){
            arr[i][y] = 1;
            /*
            bool done = nqueens(arr,n,0,y+1);
            if(done){
                return true;
            }
            */
            sum+=nqueens(arr,n,0,y+1);
            arr[i][y] = 0;
        }
    }
    return sum;
}
int main(){
    int arr[100][100];
    int n = 8;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            arr[i][j] = 0;
        }
    }
    cout<<nqueens(arr,n,0,0)<<endl;

}








