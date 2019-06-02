#include<iostream>
using namespace std;
int main(){
    char ch = cin.get();
    int x = 0;
    int y = 0;
    while(ch!='$'){
        if(ch=='N'){
            x++;
        }
        if(ch=='S'){
            x--;
        }
        if(ch=='E'){
            y++;
        }
        if(ch=='W'){
            y--;
        }
        ch = cin.get();
    }
    while(y>0){
        cout<<"E";
        y--;
    }
     while(x>0){
        cout<<"N";
        x--;
    }
     while(x<0){
        cout<<"S";
        x++;
    }
    while(y<0){
        cout<<"W";
        y++;
    }
    cout<<endl;
}
