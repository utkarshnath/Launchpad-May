#include<iostream>
#include<list>
#include<queue>
using namespace std;
class graph{
    int v;
    list<int> * l;

public:
    graph(int v){
        this->v = v;
        l = new list<int>[v];
    }
    void addEdge(int start,int end, bool bidir = false){
        l[start].push_back(end);
        if(bidir){
            l[end].push_back(start);
        }
    }
    void bfs(int src){
        queue<int> q;
        vector<bool>visited;
        for(int i=0;i<v;i++){
            visited.push_back(0);
            // visited[i] = 0;   not possible here
        }
        cout<<src<<" ";
        visited[src] = true;
        q.push(src);
        while(!q.empty()){
            int top = q.front();
            q.pop();
            for(auto it = l[top].begin();it!=l[top].end();it++){
                if(!visited[*it]){
                    cout<<*it<<" ";
                    visited[*it] = true;
                    q.push(*it);
                }
            }
        }
    }
    void print(){
        for(int i=0;i<v;i++){
            cout<<i<<" -->";
            list<int>::iterator it;
            for(it = l[i].begin(); it!=l[i].end();it++){
                cout<<*it<<" ";
            }
            cout<<"NULL"<<endl;
        }
    }
};
int main(){
    graph g(5);
    g.addEdge(0,1,true);
    g.addEdge(0,2,true);
    g.addEdge(0,3,true);
    g.addEdge(2,3,true);
    g.addEdge(2,4,true);
    g.addEdge(3,4,true);
    g.print();
    g.bfs(0);
    cout<<endl;
}
