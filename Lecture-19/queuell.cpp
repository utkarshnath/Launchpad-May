#include<iostream>
#include<queue>
using namespace std;
template <typename T>
struct node{
    T data;
    node * next;

    node(T data){
        this->data = data;
        next = NULL;
    }
};
template <typename T>
struct queue1{
    node<T> * head;
    node<T> * tail;
    int curr;
    queue1(){
        head = tail = 0;
        curr=0;
    }
    int size(){
        return curr;
    }
    bool isempty(){
        return curr==0;
    }
    void enqueue(T data){
        node<T> * temp = new node<T>(data);
        if(head==NULL){
            head = tail = temp;
            curr++;
            return;
        }
        tail->next = temp;
        tail = temp;
        curr++;
        return;
    }

    void dequeue(){
        if(head){
            node<T> * temp = head;
            head = head->next;
            delete temp;
            curr--;
            return;
        }
    }

    T top(){
        if(head){
            return head->data;
        }
    }
};
void print(queue<int> q){
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
    return;
}
int main(){
queue<int> q;
q.push(10);q.push(20);q.push(30);q.push(40);
q.push(50);q.push(60);
q.pop();
q.pop();
q.push(60);
print(q);
//print(q);
}





