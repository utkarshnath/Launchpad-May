#include<iostream>
using namespace std;
int lcs(string a,string b){
    int m = a.length();
    int n = b.length();
    int dp[100][100];
    for(int i=0;i<=n;i++){
        dp[0][i] = 0;
    }
    for(int i=0;i<=m;i++){
        dp[i][0] = 0;
    }
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(a[i-1]==b[j-1]){
                dp[i][j] = dp[i-1][j-1]+1;
            }else{
                dp[i][j] = max(dp[i][j-1],dp[i-1][j]);
            }
        }
    }
    return dp[m][n];
}
int main(){
cout<<lcs("aybf","yxba")<<endl;
}
