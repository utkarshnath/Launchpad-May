#include<iostream>
using namespace std;
int a = 10;
int main(){
    int x = 0;
    int y = 10;
    //cout<<&y<<endl;
    {
        int y = 5;
        //cout<<&y<<endl;
        cout<<::y<<endl;
    }
    int a = 11;
    //cout<<y<<endl;
    //cout<<x<<" "<<y<<endl;
}
