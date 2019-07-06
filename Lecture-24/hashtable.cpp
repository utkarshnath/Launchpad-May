#include<iostream>
#include<string>
using namespace std;
template <typename T>
struct node{
    string key;
    T value;
    node * next;
    node(string key,T value){
        this->key = key;
        this->value = value;
        next = NULL;
    }
};
template <typename T>
class hashtable{
    node<T>** table;
    int tableSize;
    int currSize;

    int hash(string key){
        int power = 1;
        int curr = 0;
        for(int i=0;i<key.size();i++){
            power = (power*37)%tableSize;
            curr += key[i]*power;
        }
        curr = curr%tableSize;
        return curr;
    }
    void rehash(){
        node<T> ** oldTable = table;
        int oldtableSize = tableSize;
        table = new node<T>*[tableSize*2];
        tableSize = 2*tableSize;
        for(int i=0;i<tableSize;i++){
            table[i] = NULL;
        }
        currSize = 0;
        for(int i=0;i<oldtableSize;i++){
            node<T> * it = oldTable[i];
            while(it){
                insert(it->key,it->value);
                it = it->next;
            }
        }
    }
public:
    hashtable(int size){
        tableSize = size;
        currSize = 0;
        table = new node<T>*[size];
        for(int i=0;i<size;i++){
            table[i] = NULL;
        }
    }
    void insert(string key,T value){
        node<T> * temp = new node<T>(key,value);
        int index = hash(key);
        temp->next = table[index];
        table[index] = temp;
        currSize++;
        float lf = currSize/(tableSize*1.0);
        if(lf>0.5){
            rehash();
        }
    }

    node<T>* find(string key){
        int index = hash(key);
        return table[index];
    }

    void remove(string key,T value){
        int index = hash(key);
        node<T>* head = table[index];
        node<T>* parent = NULL;
        if(head->value==value){
            table[index] = head->next;
            delete head;
        }
        while(head && head->value != value){
            parent = head;
            head = head->next;
        }
        if(head){
            parent->next = head->next;
            delete head;
        }
        return;
    }
    void print(){
        for(int i=0;i<tableSize;i++){
            cout<<i<<"::";
            node<T> * head = table[i];
            while(head){
                cout<<head->key<<" , "<<head->value<<"-->";
                head = head->next;
            }
            cout<<endl;
        }
    }
};
int main(){
hashtable<int> h(7);
h.insert("abc",13);
h.insert("behrhgjer",10);
h.insert("dvqw",11);
h.print();
cout<<endl;
h.insert("iwue",113);
h.insert("wkjeb",15);
cout<<h.find("wkjeb")->value<<endl;
h.insert("dvqw",14);
h.print();
//h.remove("dvqw",11);
//h.print();

}







