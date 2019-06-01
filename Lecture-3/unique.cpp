#include<iostream>
using namespace std;
int main(){
 int n = 5;
 int i=0,no=0,x;
 while(i<5){
    cin>>x;
    no^=x; // no = no ^ x;
    i++;
 }
cout<<no<<endl;;
}
