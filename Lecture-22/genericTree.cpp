#include<iostream>
#include<queue>
using namespace std;
struct node{
    int data;
    int childCount;
    node * parent;
    node ** child;

    node(int data,int childCount){
        this->data = data;
        this->childCount = childCount;
        parent = NULL;
        child = new node*[childCount];

        node * root = new node(10,5);

        node * temp = new node(11,1);
        root->child[0] = temp;
    }
};
int main(){

}
