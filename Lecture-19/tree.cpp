#include<iostream>
#include<queue>
using namespace std;
class node {
    int data;
    node * left;
    node * right;
public:
    node(int data){
        this->data = data;
        left = right = NULL;
    }
    void setData(int data){
        this->data = data;
        return;
    }
    int getData(){
        return data;
    }
    void setLeft(node* left){
        this->left = left;
        return;
    }
    node * getleft(){
        return left;
    }
    void setRight(node* right){
        this->right = right;
        return;
    }
    node * getRight(){
        return right;
    }
};
node * createTree(){
    cout<<"Enter data and -1 tpo exit";
    int data;
    cin>>data;
    node * root = NULL;
    if(data!=-1){
        root = new node(data);
    }
    queue<node *>q;
    if(root!=NULL){
        q.push(root);
    }
    while(!q.empty()){
        node * top = q.front();
        cout<<"Enter left child of "<<top->getData()<<" -1 to exit"endl;
        cin>>data;
        if(data!=-1){
            node * left = new node(data);
            top->setLeft(left);
        }
    }
}
int main(){
    node * root = new node(10);
   cout<<root->getData()<<endl;
}
