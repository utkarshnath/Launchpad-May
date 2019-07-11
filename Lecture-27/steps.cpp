  #include<iostream>
using namespace std;
int steps(int n){
    if(n==1){
        return 0;
    }
    int a = INT_MAX;
    int b = INT_MAX;
    int c = INT_MAX;
    if(n%3==0){
        a = steps(n/3);
    }
    if(n%2==0){
        b = steps(n/2);
    }
    c = steps(n-1);
    return min(a,min(b,c))+1;
}

int stepsDp(int n){
    int arr[1000] = {-1,0,1,1};
    for(int i=4;i<=n;i++){
        int a = INT_MAX;
        int b = INT_MAX;
        int c = INT_MAX;
        if(i%3==0){
            a = arr[i/3];
        }
        if(i%2==0){
            b = arr[i/2];
        }
        c = arr[i-1];
        arr[i] = min(a,min(b,c))+1;
    }
    return arr[n];
}
int main(){
    cout<<steps(10)<<endl;
    cout<<stepsDp(10)<<endl;
}








