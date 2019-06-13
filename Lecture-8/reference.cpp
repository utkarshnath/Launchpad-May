#include<iostream>
using namespace std;
int main(){
int x = 10;
int &y = x;
int &z = y;
cout<<&x<<endl;
cout<<&y<<endl;
y++;
cout<<x<<endl;;
}
