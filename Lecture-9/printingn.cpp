#include<iostream>
using namespace std;
// magically prints 1->n
void printInc(int n){
    if(n==1){
        cout<<n<<endl;
        return;
    }
    printInc(n-1);
    cout<<n<<endl;
    return;
}
void printDec(int n){
    if(n==1){
        cout<<1<<endl;
        return;
    }
    cout<<n<<endl;
    printDec(n-1);
    return;
}
int main(){
printInc(5);
printDec(5);
}





