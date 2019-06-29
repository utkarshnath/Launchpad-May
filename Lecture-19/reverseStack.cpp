#include<iostream>
#include<stack>
using namespace std;
void mirror(stack<int>&s,stack<int>&s1){
   if(s.empty()){
    return;
   }
   int top = s.top();
   s.pop();
   mirror(s,s1);
   s1.push(top);
    return;
}
void print(stack<int>s){
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
}
void copy(stack<int>&s,stack<int>&s1){
    while(!s1.empty()){
        s.push(s1.top());
        s1.pop();
    }
}

void reverseStack(stack<int>&s,stack<int>s1){
    int n = s.size();
    for(int i=0;i<n;i++){
        int top = s.top();
        s.pop();
        for(int j=0;j<n-i-1;j++){
            s1.push(s.top());
            s.pop();
        }
        s.push(top);
        while(!s1.empty()){
            s.push(s1.top());
            s1.pop();
        }
    }
}
int main(){
stack<int>s;
s.push(10);s.push(20);s.push(30);s.push(40);
stack<int>s1;
reverseStack(s,s1);
print(s);
}
