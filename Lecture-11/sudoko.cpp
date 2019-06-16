#include<iostream>
using namespace std;
bool isSafe(int arr[100][100],int k,int x,int y){
    // 4 dir
    for(int i=x,j=y;i>=0;i--){
        if(arr[i][j]==k){
            return false;
        }
    }
    for(int i=x,j=y;i<9;i++){
        if(arr[i][j]==k){
            return false;
        }
    }
    for(int i=x,j=y;j<9;j++){
        if(arr[i][j]==k){
            return false;
        }
    }
    for(int i=x,j=y;j>=0;j--){
        if(arr[i][j]==k){
            return false;
        }
    }
    //box
    int x1 = 3*(x/3);
    int y2 = 3*(y/3);
    for(int i=x1;i<x1+3;i++){
        for(int j=y2;j<y2+3;j++){
            if(arr[i][j]==k){
                return false;
            }
        }
    }
    return true;
}
bool sudoko(int arr[100][100],int n,int x,int y){
    if(x==n-1 && y==n){
        cout<<"******************************************"<<endl;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<"******************************************"<<endl;
        return true;
    }
    if(y==n){
        x++;
        y=0;
    }
    if(arr[x][y]==0){
        for(int i=1;i<10;i++){
            if(isSafe(arr,i,x,y)){
                arr[x][y] = i;
                bool done = sudoko(arr,n,x,y+1);
                if(done){
                    return true;
                }
                arr[x][y] = 0;
            }
        }
    }else{
        return sudoko(arr,n,x,y+1);
    }
    return false;
}
int main(){
int mat[100][100] = {{5,3,0,0,7,0,0,0,0},
                {6,0,0,1,9,5,0,0,0},
                {0,9,8,0,0,0,0,6,0},
                {8,0,0,0,6,0,0,0,3},
                {4,0,0,8,0,3,0,0,1},
                {7,0,0,0,2,0,0,0,6},
                {0,6,0,0,0,0,2,8,0},
                {0,0,0,4,1,9,0,0,5},
                {0,0,0,0,8,0,0,7,9}};
cout<<sudoko(mat,9,0,0)<<endl;;

}
