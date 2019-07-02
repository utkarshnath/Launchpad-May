#include<iostream>
#include<queue>
#include<vector>
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
int diameter(node * root){
    if(!root){
        return 0;
    }
    int ld = diameter(root->left);
    int rd = diameter(root->right);
    int lh = height(root->left);
    int rh = height(root->right);
    return max(lh+rh+1,max(rd,ld));
}
pair<int,int> diaFaster(node * root){
    if(!root){
        pair<int,int> p(0,0);
        return p;
    }
    pair<int,int> left = diaFaster(root->left);
    pair<int,int> right = diaFaster(root->right);
    int ld = left.first;
    int rd = right.first;
    int lh = left.second;
    int rh = right.second;
    pair<int,int> curr;
    curr.first = max(lh+rh+1,max(rd,ld));
    curr.second = max(lh,rh)+1;
    return curr;
}
bool find(node * root,int data){
    if(!root){
        return false;
    }
    if(root->data==data){
        return true;
    }
    bool left = find(root->left,data);
    bool right = find(root->right,data);
    return left||right;
}
node * mirror(node * root){
    if(root==NULL){
        return NULL;
    }
    node * newRoot = new node(root->data);
    newRoot->left = mirror(root->right);
    newRoot->right = mirror(root->left);
    return newRoot;
}
int findIndex(vector<int>v,int data,int start,int end){
    for(int i=start;i<=end;i++){
        if(v[i]==data){
            return i;
        }
    }
    return -1;
}
node * createTreeFromPreIn(vector<int>pre,vector<int>in,int pstart,int pend,int istart,int iend){
    if(pstart>pend){
        return NULL;
    }
    node * root = new node(pre[pstart]);
    int index = findIndex(in,pre[pstart],istart,iend);
    int len = index-istart;
    root->left = createTreeFromPreIn(pre,in,pstart+1,pstart+len,istart,index-1);
    root->right = createTreeFromPreIn(pre,in,pstart+len+1,pend,index+1,iend);
    return root;
}
bool path(node * root,int data){
    if(!root){
        return false;
    }
    if(root->data==data){
        cout<<data<<endl;
        return true;
    }
    bool left = path(root->left,data);
    bool right = path(root->right,data);
    if(left || right){
        cout<<root->data<<endl;
        return true;
    }
    return false;
}
// 8 10 3 1 6 -1 14 -1 -1 4 7 13 -1 -1 -1 -1 -1 -1 -1
int main(){

//cout<<diameter(root)<<endl;;
//node * root1 = mirror(root);
//printAtDiffLevel(root1);
vector<int> pre,in;
pre.push_back(8);pre.push_back(10);pre.push_back(1);pre.push_back(6);
pre.push_back(4);pre.push_back(7);pre.push_back(3);pre.push_back(14);
pre.push_back(13);

in.push_back(1);in.push_back(10);in.push_back(4);in.push_back(6);
in.push_back(7);in.push_back(8);in.push_back(3);in.push_back(13);
in.push_back(14);

node * root1 = createTreeFromPreIn(pre,in,0,pre.size()-1,0,in.size()-1);
printAtDiffLevel(root1);
cout<<endl;
path(root1,4);
/*
cout<<height(root)<<endl;
printAtDepthK(root,2);
cout<<endl;
printAtDiffLevel(root);

/*
cout<<endl;
cout<<maxNode(root)<<endl;
pair<node*,int> p = greatestSubGroup(root);
cout<<p.first->data<<" "<<p.second<<endl;
*/

}



