#include<iostream>
#include<queue>
using namespace std;
class stack{
    queue<int> q1;
    queue<int> q2;

    bool isEmpty(){
        return q1.empty() && q2.empty();
    }
    int size(){
        return q1.size() | q2.size();
    }
    void push(int data){
        if(!q1.empty()){
            q2.push(data);
            while(!q1.empty()){
                q2.push(q1.front());
                q1.pop();
            }
        }else{
            q1.push(data);
            while(!q2.empty()){
                q1.push(q2.front());
                q2.pop();
            }
        }

    }
    void pop(){
        if(!q1.empty()){
            q1.pop();
        }else{
            q2.pop();
        }
    }
    int top(){
        if(!q1.empty()){
           return q1.front();
        }else{
            return q2.front();
        }
    }
};
int main(){

}
