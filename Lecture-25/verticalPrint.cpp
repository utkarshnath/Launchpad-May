#include<bits/stdc++.h>
using namespace std;
map<int,vector<int> > mymap;
struct node {
    int data;
    node * left;
    node * right;
    node(int data){
        this->data = data;
        left = right = NULL;
    }
};
node * createTree(){
    cout<<"Enter data and -1 to exit"<<endl;
    int data;
    cin>>data;
    node * root = NULL;
    queue<node*>q;
    if(data!=-1){
        root = new node(data);
        q.push(root);
    }
    while(!q.empty()){
        node * curr = q.front();
        q.pop();
        cout<<"Enter data for left of "<<curr->data<<endl;
        cin>>data;
        if(data!=-1){
            node * left = new node(data);
            curr->left = left;
            q.push(left);
        }

        cout<<"Enter data for right of "<<curr->data<<endl;
        cin>>data;
        if(data!=-1){
            node * right = new node(data);
            curr->right = right;
            q.push(right);
        }
    }
    return root;
}
void fillmap(node * root,int value){
    if(!root){
        return;
    }
    mymap[value].push_back(root->data);
    fillmap(root->left,value-1);
    fillmap(root->right,value+1);
    return;
}
void print(){
    map<int,vector<int> > :: iterator it;
    for(it = mymap.begin();it!=mymap.end();it++){
        cout<<it->first<<" --> ";
        for(int i=0;i<it->second.size();i++){
            cout<<it->second[i]<<" ";
        }
        cout<<endl;
}
}
int main(){
    node * root = createTree();
    fillmap(root,0);
    print();
}










