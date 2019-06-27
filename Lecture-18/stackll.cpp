#include<iostream>
using namespace std;
template <typename T>
struct node{
    T data;
    node * next;
    node(T data){
        this->data= data;
        next = NULL;
    }
};
template <typename Y>
struct stack{
    node<Y> * head;
    int count;
    stack(){
        head = NULL;
        count = 0;
    }
    bool isEmpty(){
        return head==NULL;
    }
    int size(){
        return count;
    }
    void push(Y data){
        node<Y> * temp = new node<Y>(data);
        count++;
        /*if(!head){
            head = temp;
            return;
        }*/
        temp->next = head;
        head = temp;
        return;
    }
    void pop(){
        if(!isEmpty()){
            node<Y> * temp =  head;
            head = head->next;
            count--;
            delete temp;
        }
        return;
    }
    Y top(){
        if(!isEmpty()){
            return head->data;
        }
        return -1;
    }
};
int main(){
stack<int> s;
s.push(10);s.push(20);s.push(30);s.push(40);
cout<<s.top()<<endl;
s.pop();
cout<<s.top()<<endl;
s.push(50);
cout<<s.top()<<endl;
}
