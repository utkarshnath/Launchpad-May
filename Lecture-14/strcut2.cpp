#include<iostream>
using namespace std;
struct message{
    char arr[100];
    long time;
    bool seen;

    message(){
        //cout<<"default constructor"<<endl;
    }
    message(int t){
        cout<<"1 constructor"<<endl;
        time = t;
    }
    message(int t,bool s){
        cout<<"2 constructor"<<endl;
        time = t;
        seen =s;
    }
    ~message(){
        cout<<"destructor"<<endl;
    }
};
int main() {
    message m;
    message m1(67,1);
    //m.time = 10;
    m.seen = 0;
    m.arr[0] = 'A';
    m.arr[1] = 'B';
    m.arr[2] = 0;
    cout<<m.time<<endl;
    cout<<m.seen<<endl;
    cout<<m.arr<<endl;
}
