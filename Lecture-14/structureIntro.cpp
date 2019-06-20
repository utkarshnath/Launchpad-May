#include<iostream>
using namespace std;
struct message{
    char arr[100];
    long time;
    bool seen;
};
int main() {
    cout<<sizeof(long)<<endl;
    message m;
    cout<<sizeof(m)<<endl;
    m.time = 10;
    m.seen = 0;
    m.arr[0] = 'A';
    m.arr[1] = 'B';
    m.arr[2] = 0;
    cout<<m.time<<endl;
    cout<<m.seen<<endl;
    cout<<m.arr<<endl;
}
