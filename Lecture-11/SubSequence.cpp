#include<iostream>
using namespace std;
void f(int input[],int output[],int inputIndex,int outputIndex,int n){
        if(inputIndex>=n){
            for(int i=0;i<outputIndex;i++){
                cout<<output[i];
            }
            cout<<endl;
            return;
        }
        output[outputIndex] = input[inputIndex];
        f(input,output,inputIndex+1,outputIndex+1,n);
        f(input,output,inputIndex+1,outputIndex,n);
        return;

}
int main(){
    int input[10] = {1,2,3,4};
    int output[10];
    f(input,output,0,0,3);
}
