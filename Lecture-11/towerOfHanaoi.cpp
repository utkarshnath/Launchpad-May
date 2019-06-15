#include<iostream>
using namespace std;
void toh(int n,char source,char helper,char dest){
    if(n==1){
        cout<<source<<" --> "<<dest<<endl;
        return;
    }
    toh(n-1,source,dest,helper);
    toh(1,source,helper,dest);
    //cout<<source<<" --> "<<dest<<endl;
    toh(n-1,helper,source,dest);
    return;
}
int main(){
toh(100,'A','B','C');
}
