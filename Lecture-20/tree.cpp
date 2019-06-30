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
void preorder(node * root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
    return;
}
void inorder(node * root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
    return;
}
void postorder(node * root){
    if(root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
    return;
}
void levelorder(node * root){
    queue<node *>q;
    q.push(root);
    while(!q.empty()){
        node * curr = q.front();
        q.pop();
        cout<<curr->data<<" ";
        if(curr->left){
            q.push(curr->left);
        }
        if(curr->right){
            q.push(curr->right);
        }
    }
    return;
}
int count(node * root){
    if(!root){
        return 0;
    }
    int left = count(root->left);
    int right = count(root->right);
    return left+right+1;
}

int maxNode(node * root){
    if(!root){
        return INT_MIN;
    }
    int left = maxNode(root->left);
    int right = maxNode(root->right);
    return max(root->data,max(right,left));
}
int  greaterThenX(node * root,int x){
    if(!root){
        return 0;
    }
    int left = greaterThenX(root->left,x);
    int right = greaterThenX(root->right,x);
    if(root->data > x){
        return left+right+1;
    }
    return left+right;
}
pair<node*,int> max1(pair<node*,int> a,pair<node*,int> b){
    if(a.second > b.second){
        return a;
    }
    return b;
}
pair<node*,int> greatestSubGroup(node * root){
    if(!root){
        pair<node*,int> p(0,0);
        return p;
    }
    pair<node*,int> left = greatestSubGroup(root->left);
    pair<node*,int> right = greatestSubGroup(root->right);
    int currSum = root->data;
    if(root->left){
        currSum+=root->left->data;
    }
    if(root->right){
        currSum+=root->right->data;
    }
    pair<node*,int> curr(root,currSum);
    return max1(curr, max1(left,right));
}
int degree(node * root){
    return (bool)root->left+(bool)root->right;
}
int height(node * root){
    if(!root){
        return 0;
    }
    int lh = height(root->left);
    int rh = height(root->right);
    return max(lh,rh)+1;
}
void printAtDepthK(node * root,int k){
    if(!root){
        return;
    }
    if(k==0){
        cout<<root->data<<" ";
        return;
    }
    printAtDepthK(root->left,k-1);
    printAtDepthK(root->right,k-1);
    return;
}
// 8 10 3 1 6 -1 14 -1 -1 4 7 13 -1 -1 -1 -1 -1 -1 -1
int main(){
node * root = createTree();
preorder(root);
cout<<endl;
inorder(root);
cout<<endl;
postorder(root);
cout<<endl;
levelorder(root);
cout<<height(root)<<endl;
printAtDepthK(root,2);
cout<<endl;
/*
cout<<endl;
cout<<maxNode(root)<<endl;
pair<node*,int> p = greatestSubGroup(root);
cout<<p.first->data<<" "<<p.second<<endl;
*/

}



