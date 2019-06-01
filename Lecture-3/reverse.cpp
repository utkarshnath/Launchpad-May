#include<iostream>
using namespace std;
int main(){
        int n;
        cin>>n;
        int t;
        for(t=0;n>0;t = (t*10 + n%10), n/=10){

        }
        cout<<t<<endl;

}
