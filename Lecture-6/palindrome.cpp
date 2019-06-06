#include<iostream>
using namespace std;
int main(){
    char arr[100];
    cin.getline(arr,100);
    int start = 0;
    int i=0;
    for(i=0;arr[i]!=0;i++);
    int end = i-1;
    while(start<end){
        if(arr[start]!=arr[end]){
            cout<<"NOT"<<endl;
            return 0;
        }
        start++;
        end--;
    }
    cout<<"YES"<<endl;
}
