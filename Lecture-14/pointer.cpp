#include<iostream>
using namespace std;

struct message{
    char arr[100];
    long time;
    bool seen;
    message(){
        cout<<"1 constructor"<<endl;
    }
    message(int t){
        cout<<"1 constructor"<<endl;
        this->time = t;
    }
    message(int t,bool s){
        cout<<"2 constructor"<<endl;
        time = t;
        seen =s;
    }
    message(char m[],int time,bool seen){
        this->time = time;
        this->seen = seen;
        int i=0;
        while(m[i]!=0){
            arr[i] = m[i];
            i++;
        }
        arr[i] = 0;
    }
};
struct chatHistroy{
    message * arr;
    int n;
};
void print(message m){
    cout<<m.arr<<endl;
    cout<<m.time<<endl;
    cout<<m.seen<<endl;
}
int main(){
message m("ABC",0,1);
message* ptr = new message[100];
chatHistroy ch;
ch.arr  = ptr;
ch.n = 10;
print(*ch.arr);
print(ch->arr);

}



