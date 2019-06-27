#include<iostream>
#include<vector>
using namespace std;
template <typename T>
struct stack{
    vector<T> v;
    int size(){
        return v.size();
    }
    bool isEmpty(){
        return v.size()==0;
    }
    void push(T data){
        v.push_back(data);
        return;
    }
    void pop(){
        if(!isEmpty()){
            v.pop_back();
        }
        return;
    }
    T top(){
        if(!isEmpty()){
            return v[v.size()-1];
        }
        return -1;
    }
};
int main(){
stack<node*> s;
s.push(10);s.push(20);s.push(30);s.push(40);
cout<<s.top()<<endl;
s.pop();
cout<<s.top()<<endl;
s.push(50);
cout<<s.top()<<endl;

}
