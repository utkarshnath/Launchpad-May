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
bool search(node * root,int data){
    if(!root){
        return false;
    }
    if(root->data==data){
        return true;
    }
    if(root->data > data){
        return search(root->left,data);
    }else{
        return search(root->right,data);
    }
}
bool findElement(node * root,int data){
    while(root){
        if(root->data == data){
            return true;
        }
        if(root->data > data){
            root = root->left;
        }else{
            root = root->right;
        }
    }
    return false;
}
node * deleteElement(node * root,int data){
    if(!root){
        return NULL;
    }
    if(root->data == data){
        // no child
        if(!root->left && !root->right){
            delete root;
            return NULL;
        }
        // 1 child
        if((!root->left && root->right) || (root->left && !root->right)){
            node * temp;
            if(root->left){
                temp = root->left;
            }else{
                temp = root->right;
            }
            delete root;
            return temp;
        }
        // 2 child
        node * parent = root;
        node * it = root->left;
        while(it->right){
            parent = it;
            it = it->right;
        }
        if(parent!=root){
            parent->right = it->left;
            it->left = root->left;
        }
        it->right = root->right;
        delete root;
        return it;
    }

    if(root->data > data){
        root->left = deleteElement(root->left,data);
    }else{
        root->right = deleteElement(root->right,data);
    }
    return root;
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
void printInRange(node * root,int k1,int k2){
    if(!root){
        return;
    }
    if(root->data >= k1){
        printInRange(root->left,k1,k2);
    }
    if(root->data >= k1 && root->data<=k2){
        cout<<root->data<<" ";
    }
   if(root->data < k2){
        printInRange(root->right,k1,k2);
   }
}
pair<node *,node *> llFromBst(node * root){
    if(!root){
        pair<node *,node *>p(0,0);
        return p;
    }
    pair<node *,node *> left = llFromBst(root->left);
    pair<node *,node *> right = llFromBst(root->right);
    node * temp = new node(root->data);
    if(left.second){
        (left.second)->right = temp;
    }else{
        left.first = temp;
        left.second = temp;
    }

    if(right.first){
        temp->right = (right.first);
        left.second = right.second;
    }else{
        left.second = temp;
    }
    //temp->left = left.second);
    return left;
}
void print(node * head){
    while(head){
        cout<<head->data<<"-->";
        head = head->right;
    }
    cout<<"NULL"<<endl;
}
bool checkBST(node * root){
    static int prev = INT_MIN;
    if(!root){
        return true;
    }
    bool left = checkBST(root->left);
    if(root->data < prev){
        return false;
    }
    prev = root->data;
    bool right = checkBST(root->right);
    return left && right;
}
pair<bool,int> checkbalance(node * root){
    if(!root){
        pair<node *,node *>p(1,0);
        return p;
    }
    pair<bool,int> left = checkbalance(root->left);
    pair<bool,int> right = checkbalance(root->right);
    pair<bool,int> curr;
    int x = abs(left.second- right.second);
    curr.first = left.first && right.first && (x<=1);
    curr.second = max(left.second,right.second)+1;
    return curr;
}
int main(){
    node * root = NULL;
    addElement(root,8);addElement(root,3);addElement(root,10);
    addElement(root,1);addElement(root,6);addElement(root,14);
    addElement(root,4);addElement(root,7);addElement(root,13);
    printAtDiffLevel(root);
    //root = deleteElement(root,8);
    //printAtDiffLevel(root);
    pair<node *,node *> temp = llFromBst(root);
    //cout<<temp.first->data<<endl;
    print(temp.first);
}








