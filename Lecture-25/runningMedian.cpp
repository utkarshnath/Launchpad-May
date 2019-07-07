#include<iostream>
#include<queue>
using namespace std;
int main(){
    // max heap
    priority_queue<int>q1;
    //min heap
    priority_queue<int,vector<int>,greater<int> >q2;
    int n;
    cin>>n;
    int median = n;
    while(n!=-1){
        if(q1.size() > q2.size()){
            if(n<median){
                q2.push(q1.top());
                q1.pop();
                q1.push(n);
            }else{
                q2.push(n);
            }
            median = (q1.top()+q2.top())/2;
        }else if(q1.size() < q2.size()){
            if(n<=median){
                q1.push(n);
            }else{
                q1.push(q2.top());
                q2.pop();
                q2.push(n);
            }
            median = (q1.top()+q2.top())/2;
        }else{
            if(n<median){
                q1.push(n);
                median = q1.top();
            }else{
                q2.push(n);
                median = q2.top();
            }
        }
        cout<<median<<" ";
        cin>>n;
    }
    cout<<endl;
}
