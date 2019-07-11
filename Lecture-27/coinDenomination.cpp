#include<iostream>
using namespace std;
int coinDeno(int n,int arr[],int size){
    if(n<0 || size<=0){
        return 0;
    }
    if(n==0){
        return 1;
    }
    return coinDeno(n-arr[size-1],arr,size) + coinDeno(n,arr,size-1);
}
int coinDp(int n,int arr[],int size){
    int dp[100][100];
    for(int i=0;i<=size;i++){
        dp[0][i] = 1;
    }
    for(int i=0;i<=n;i++){
        dp[i][0] = 0;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=size;j++){
            int jthElementPresent = 0;
            if(i-j >= 0){
                jthElementPresent = dp[i-j][j];
            }
            int jthElementNotPresent = dp[i][j-1];
            dp[i][j] = jthElementPresent+jthElementNotPresent;
        }
    }
    return dp[n][size];
}
int main(){
int arr[] = {1,2,3};
cout<<coinDeno(5,arr,3)<<endl;
cout<<coinDp(5,arr,3)<<endl;
}
