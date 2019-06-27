#include<iostream>
using namespace std;
struct node{
    int data;
    node * next;
    bool visited;
    node(int data){
        visited = false;
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
    while(head!=NULL && head->visited==false){
        head->visited = true;
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
void insertAtK(node ** head,int data,int k){
    node * temp = new node(data);
    if(k==0){
        temp->next = *head;
        *head = temp;
        return;
    }
    node * it = *head;
    while(--k){
        it = it->next;
    }
    temp->next = it->next;
    it->next = temp;
    return;
}
void deleteAtK(node ** head,int k){
    if(k==0){
        node * temp = *head;
        *head = (*head)->next;
        delete temp;
        return;
    }
    node * it = *head;
    while(--k){
        it = it->next;
    }
    node * temp = it->next;
    //it->next = temp->next;
    it->next = it->next->next;
    delete temp;
    return;
}
node * deleteAtK1(node * head,int k){
    if(k==0){
        node * temp = head;
        head = (head)->next;
        delete temp;
        return head;
    }
    node * it = head;
    while(--k){
        it = it->next;
    }
    node * temp = it->next;
    //it->next = temp->next;
    it->next = it->next->next;
    delete temp;
    return head;
}
node * findAtPositionK(node * head,int k){
    while(k-- && head){
        head = head->next;
    }
    return head;
}
int length(node * head){
    int k=0;
    while(head){
        head = head->next;
        k++;
    }
    return k;
}
node * midElement(node * head){
    node * it1 = head;
    node * it2 = head;
    while(it2->next!=NULL && it2->next->next!=NULL){
        it1 = it1->next;
        it2 = it2->next->next;
    }
    return it1;
}
bool findElement(node * head,int data){
    if(head==NULL){
        return false;
    }
    if(head->data==data){
        return true;
    }
    bool right = findElement(head->next,data);
    return right;
}
void swap(node *& head, int i,int j){
    if(i==0 && j==1){
        node * a = head;
        node * b = head->next;
        node * bNext = b->next;
        head = b;
        b->next = a;
        a->next = bNext;
        return;
    }
    if(i==0){
        node * prev = findAtPositionK(head,j-1);
        node * a = head;
        node * b = prev->next;
        node * bNext = b->next;
        head = b;
        b->next = a->next;
        prev->next = a;
        a->next = bNext;
        return;
    }
    if(j-i==1){
        node * prev = findAtPositionK(head,i-1);
        node * a = prev->next;
        node * b = a->next;
        node * bNext = b->next;
        prev->next = b;
        b->next = a;
        a->next = bNext;
        return;
    }
    node * prev1 = findAtPositionK(head,i-1);
    node * prev2 = findAtPositionK(head,j-1);
    node * a = prev1->next;
    node * b = prev2->next;
    node * bNext = b->next;
    prev1->next = b;
    b->next = a->next;
    prev2->next = a;
    a->next = bNext;
    return;
}
void bubbleSort(node ** head){
    int n = length(*head);
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            node * a = findAtPositionK(*head,j);
            node * b = findAtPositionK(*head,j+1);
            if(a->data > b->data){
                //swap
                swap(*head,j,j+1);
            }
        }
    }
    return;
}
node * ithFromLast1(node * head,int &i){
    if(!head){
        return NULL;
    }
    node * it = ithFromLast1(head->next,i);
    if(it!=NULL){
        return it;
    }
    if(i==0){
        return head;
    }
    i--;
    return it;
}
node * ithFromLast(node * head,int i){
    static int n = i;
    if(!head){
        return NULL;
    }
    node * it = ithFromLast(head->next,i);
    if(it!=NULL){
        return it;
    }
    if(n==0){
        return head;
    }
    n--;
    return it;
}
node * mergell(node * head1,node * head2){
    node * head = NULL;
    if(head1==NULL && head2==NULL){
        return NULL;
    }
    if(head1==NULL){
        return head2;
    }
    if(head2==NULL){
        return head1;
    }
    if(head1->data < head2->data){
        head = head1;
        head1 = head1->next;
    }else{
        head = head2;
        head2 = head2->next;
    }
    node * tail = head;
    while(head1 && head2){
        if(head1->data < head2->data){
            tail->next = head1;
            tail = head1;
            head1 = head1->next;
            //tail = tail->next;
        }else{
            tail->next = head2;
            tail = head2;
            head2 = head2->next;
        }
    }
    if(head1){
        tail->next = head1;
    }else{
        tail->next = head2;
    }
    return head;
}
node * mergeSort(node * head, int start,int end){
    if(start>end){
        return NULL;
    }
    if(start==end){
        return head;
    }
    int mid = (start+end)/2;
    node * midNode = findAtPositionK(head,mid);
    node * head2 = midNode->next;
    midNode->next = NULL;
    node * head1 = mergeSort(head,start,mid);
    head2 = mergeSort(head2,start,end-mid-1);
    head = mergell(head1,head2);
    return head;
}
node * reversell(node * head){
    node * prev = NULL;
    node * it = head;
    while(head){
        it = it->next;
        head->next = prev;
        prev = head;
        head = it;
    }
    return prev;
}
node * reversell1(node * head){
    if(head==NULL){
        return NULL;
    }
    if(head->next==NULL){
        return head;
    }
    node * newHead = reversell1(head->next);
    node * tail = newHead;
    while(tail->next){
        tail = tail->next;
    }
    tail->next = head;
    head->next = NULL;
    return newHead;
}
node * reversell2(node * head,node *& tail){
    if(head==NULL){
        return NULL;
    }
    if(head->next==NULL){
        tail = head;
        return head;
    }
    node * newHead = reversell2(head->next,tail);
    tail->next = head;
    tail = tail->next;
    tail->next = NULL;
    return newHead;
}
pair<node *,node * > reversell3(node * head){
    if(!head->next){
        pair<node*,node*> temp (head,head);
        //temp.first = NULL;
        //temp.second = NULL;
        return temp;
    }
    pair<node *,node * > p = reversell3(head->next);
    p.second->next = head;
    p.second = head;
    p.second->next = NULL;
    return p;
}
node* kreverse(node * head,int k){
    if(head==NULL){
        //pair<node *,node*> p(NULL,NULL);
        return NULL;
    }
    node * temp = head;
    for(int i=1;temp->next && i<k;i++){
        temp = temp->next;
    }
    node * newHead = temp->next;
    temp->next = NULL;
     pair<node *,node * > p = reversell3(head);
     newHead = kreverse(newHead,k);
     (p.second)->next = newHead;
     return p.first;
}
int main(){
    node * head = createLinklist();
    print(head);
    node* temp = kreverse(head,3);
    print(temp);
    /*
    int n = length(head);
    head = mergeSort(head,0,n-1);
      print(head);
    /*
    //insertAtHead2(&head,10);
    insertAtK(&head,10,2);
    node * temp = deleteAtK1(head,0);
    //node * mid = midElement(head);
     //print(temp);
     //swap(head,0,1);
     bubbleSort(&head);
     print(head);
     int i = 2;
     temp = ithFromLast(head,i);
     cout<<temp->data<<endl;
     //cout<<mid->data<<endl;

    /*node * head = 0;
    createLinklist1(head);
    print(head);

    node * head = 0;
    createLinklist2(&head);
    print(head);
    */
}







