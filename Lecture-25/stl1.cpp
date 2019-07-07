#include<iostream>
#include<map>
#include<vector>
using namespace std;
int main(){
map<string,int>mymap;
mymap["abc"] = 5;
mymap["abc"] = 34;
mymap["jwehvfhjw"] = 3;
mymap["uiewf"] = 15;
mymap["qdce"] = 52;

cout<<mymap["qdce"]<<endl;
map<string,int> :: iterator it = mymap.begin();
for(it = mymap.begin();it!=mymap.end();it++){
    cout<<it->first<<" "<<it->second<<endl;
}

}
