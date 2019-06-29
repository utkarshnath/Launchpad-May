#include<iostream>
using namespace std;
struct queue{
    int * arr;
    int maxSize;
    int front;
    int rear;
    int currentSize;
    queue(int maxSize){
       arr = new int[maxSize];
       this->maxSize = maxSize;
       front = 0;
       rear = maxSize-1;
       currentSize = 0;
    }

    int size(){
        return currentSize;
    }
    bool isEmpty(){
        return currentSize==0;
    }
    bool isFull(){
        return currentSize==maxSize;
    }
    void enqueue(int data){
        if(!isFull()){
            rear =  (rear+1)%maxSize;
            arr[rear] = data;
            currentSize++;
            return;
        }
        cout<<"Its full"<<endl;
        return;
    }

    void dequeue(){
        if(!isEmpty()){
            front = (front+1)%maxSize;
            currentSize--;
        }else{
            cout<<"No elemets"<<endl;
        }
    }
    int top(){
        if(!isEmpty()){
            return arr[front];
        }
    }
};
void print(queue q){
    while(!q.isEmpty()){
        cout<<q.top()<<" ";
        q.dequeue();
    }
    cout<<endl;
    return;
}
int main(){
queue q(5);
q.enqueue(10);q.enqueue(20);q.enqueue(30);q.enqueue(40);
q.enqueue(50);q.enqueue(60);
q.dequeue();
q.dequeue();
q.enqueue(60);
print(q);
print(q);
}
