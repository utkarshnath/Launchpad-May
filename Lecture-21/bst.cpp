#include<iostream>
#include<queue>
using namespace std;
struct node {
    int data;
    node * left;
    node * right;
    node(int data){
        this->data = data;
        left = right = NULL;
    }
};
void addElement(node *& root,int data){
    if(!root){
        root = new node(data);
        return;
    }
    node * it = root;
    node  * prev = NULL;
    while(it){
        if(it->data < data){
            prev = it;
            it = it->right;
        }else{
            prev = it;
            it = it->left;
        }
    }
    if(prev->data > data){
        prev->left = new node(data);
    }else{
        prev->right = new node(data);
    }
    return;
}
int minValue(node * root){
    while(root->left){
        root = root->left;
    }
    return root->data;
}
void printAtDiffLevel(node * root){
    queue<node *>q1;
    queue<node *>q2;
    q1.push(root);
    while(!q1.empty() || !q2.empty()){
        while(!q1.empty()){
            node * top = q1.front();
            cout<<top->data<<" ";
            q1.pop();
            if(top->left){
                q2.push(top->left);
            }
            if(top->right){
                q2.push(top->right);
            }
        }
        cout<<endl;
        while(!q2.empty()){
            node * top = q2.front();
            cout<<top->data<<" ";
            q2.pop();
            if(top->left){
                q1.push(top->left);
            }
            if(top->right){
                q1.push(top->right);
            }
        }
        cout<<endl;
    }
}
int main(){
    node * root = NULL;
    addElement(root,1);addElement(root,-1);addElement(root,2);
    addElement(root,5);addElement(root,10);addElement(root,4);
    addElement(root,4);addElement(root,3);
    printAtDiffLevel(root);
}








