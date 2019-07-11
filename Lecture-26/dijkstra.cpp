#include<iostream>
#include<list>
#include<vector>
#include<set>
#include<unordered_map>
using namespace std;
class graph{
    int v;
    unordered_map<int, list<pair<int,int> > > mymap;
public:
    graph(int v){
        this->v =v;
    }

    void addEdge(int start,int end,int weight,bool bidir = true){
        pair<int,int> p(end,weight);
        mymap[start].push_back(p);
        if(bidir){
            mymap[end].push_back(make_pair(start,weight));
        }
        return;
    }

    void shortestpath(int src){
        vector<int> dist;
        for(int i=0;i<v;i++){
            dist.push_back(INT_MAX);
        }

        dist[src] = 0;
        set<pair<int,int> >s;
        // dist , vertex  --- so that sorted in order of weight
        s.insert(make_pair(0,src));
        while(!s.empty()){
            auto mindistPair = s.begin();
            int currVertex = mindistPair->second;
            s.erase(mindistPair);
            //int vertexDist = minWeightPair->first;

            auto currList = mymap[currVertex];
            for(auto currListIt = currList.begin(); currListIt!=currList.end();currListIt++){
                int parentDist = dist[currVertex];
                int weight = currListIt->second;
                if(parentDist+weight < dist[currListIt->first]){
                    int curr = currListIt->first;
                    auto sit = s.find(make_pair(dist[curr],curr));
                    if(sit!=s.end()){
                        s.erase(make_pair(dist[curr],curr));
                    }
                    s.insert(make_pair(parentDist+weight,curr));
                    dist[curr] = parentDist+weight;
                }
            }
        }
        for(int i=0;i<v;i++){
            cout<<dist[i]<<" ";
        }
        cout<<endl;
    }

    void print(){
        unordered_map<int, list<pair<int,int> > > :: iterator mapit;
        for(mapit = mymap.begin();mapit!=mymap.end();mapit++){
            cout<<mapit->first<<" :: ";
            list<pair<int,int> > :: iterator lit;
            for(lit = (mapit->second).begin();lit!=(mapit->second).end();lit++){
                cout<<lit->first<<","<<lit->second<<" --> ";
            }
            cout<<"NULL"<<endl;
        }
    }
};
int main(){
    graph g(9);
    g.addEdge(0,1,4);
    g.addEdge(0,7,8);
    g.addEdge(1,2,8);
    g.addEdge(1,7,11);
    g.addEdge(2,8,2);
    g.addEdge(2,3,7);
    g.addEdge(2,5,4);
    g.addEdge(3,5,14);
    g.addEdge(3,4,9);
    g.addEdge(4,5,10);
    g.addEdge(6,5,2);
    g.addEdge(7,6,1);
    g.addEdge(8,6,6);
    g.addEdge(7,8,7);
    g.print();
    cout<<endl;
    g.shortestpath(0);
}
