#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int c = 0;
for(int i=0;i<32;i++){
    c+= ((n>>i)&1);
    //n = n>>1;
}
cout<<c<<endl;
}
