#include<iostream>
using namespace std;
struct node{
    int data;
    node * next;
    node * prev;
    node(int data){
        this->data= data;
        next = NULL;
        prev = NULL;
    }
};
node * createll(){
    cout<<"Enter no. and -1 to exit"<<endl;
    int data;
    cin>>data;
    node * head = NULL;
    if(data!=-1){
        head = new node(data);
        cin>>data;
    }
    node * it = head;
    while(data!=-1){
        node * temp = new node(data);
        it->next = temp;
        temp->prev = it;
        it = it->next;
        cin>>data;
    }
    return it;
}
void print(node * head){
    while(head!=NULL){
        cout<<head->data<<"-->";
        head = head->prev;
    }
    cout<<"NULL"<<endl;
}
int main(){
node * tail = createll();
print(tail);
}






