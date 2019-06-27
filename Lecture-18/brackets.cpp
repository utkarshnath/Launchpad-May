#include<iostream>
#include<stack>
bool isbalance(char arr[]){
    stack<int>s;
    int i=0;
    while(arr[i]!=0){
        if(arr[i]=='(' || arr[i]=='{' || arr[i]=='['){
            s.push(arr[i]);
           }
         else if(!s.empty() && (arr[i]==')' && s.top()=='(') || (arr[i]=='}' && s.top()=='{') || (arr[i]==']' && s.top()=='[')){
            s.pop();
           }else{
            return false;
           }
    }
    if(s.empty()){
        return true;
    }
    return false;
}
using namespace std;
int main(){
stack<int>s;
s.push(10);
s.push(20);
cout<<s.top()<<endl;
}
