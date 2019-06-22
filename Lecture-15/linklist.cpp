#include<iostream>
using namespace std;
struct node{
    int data;
    node * next;
    node(int data){
        this->data= data;
        next = NULL;
    }
};
node* createLinklist(){
    cout<<"Enter data and -1 to exit"<<endl;
    int data;
    cin>>data;
    node * head = NULL;
    if(data!=-1){
        head = new node(data);
        //head->data = data;
        //head->next = NULL;
        cin>>data;
    }
    node * it = head;
    while(data!=-1){
        node * temp = new node(data);
        it->next = temp;
        it = it->next;
        cin>>data;
    }
    return head;
}
void createLinklist1(node *& head){
    cout<<"Enter data and -1 to exit"<<endl;
    int data;
    cin>>data;
    if(data!=-1){
        head = new node(data);
        cin>>data;
    }
    node * tail = head;
    while(data!=-1){
        node * temp = new node(data);
        tail->next = temp;
        tail = tail->next;
        cin>>data;
    }
    return;
}
void createLinklist2(node ** head){
    cout<<"Enter data and -1 to exit"<<endl;
    int data;
    cin>>data;
    if(data!=-1){
        *head = new node(data);
        cin>>data;
    }
    node * tail = *head;
    while(data!=-1){
        node * temp = new node(data);
        tail->next = temp;
        tail = tail->next;
        cin>>data;
    }
    return;
}
node * nextElement(node * head){
    return head->next;
}
node* insertAtHead(node * head,int data){
    node * newHead = new node(data);
    newHead->next = head;
    return newHead;
}
void print(node * head){
    while(head!=NULL){
        cout<<head->data<<"-->";
        head = head->next;
    }
    cout<<"NULL"<<endl;
}
void insertAtHead1(node * head,int data){
    node * newHead = new node(data);
    newHead->next = head;
    head = newHead;
    //print(head);
}
void insertAtHead2(node **head,int data){
    node * newHead = new node(data);
    newHead->next = *head;
    *head = newHead;
}
int main(){
    node * head = createLinklist();
    print(head);
    insertAtHead2(&head,10);
     print(head);

    /*node * head = 0;
    createLinklist1(head);
    print(head);

    node * head = 0;
    createLinklist2(&head);
    print(head);
    */
}







