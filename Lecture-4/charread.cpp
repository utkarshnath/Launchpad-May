#include<iostream>
using namespace std;
int main(){
    char ch;
    int count=0;
    //cin>>ch;
    ch = cin.get();
    while(ch!='$'){
        count++;
        cout<<ch;
        //cin>>ch;
        ch = cin.get();
    }
    cout<<endl;
    cout<<count<<endl;
}
