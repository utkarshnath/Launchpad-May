#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int>v;
v.push_back(10);
v.push_back(20);
v.push_back(30);
v.push_back(40);
for(int i=0;i<4;i++){
    cout<<v[i]<<" ";
    //cin>>n;
    //v.push_back(n);
}
vector<int> :: iterator it;

for(it = v.begin();it!=v.end();it++){
    cout<<*it<<endl;
}

cout<<endl;
v.clear();
cout<<v[2]<<endl;
cout<<v.size()<<endl;;

}
