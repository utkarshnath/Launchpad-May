#include<iostream>
#include<set>
#include<vector>
using namespace std;
int main(){
set<string> myset;
myset.insert("rferg");
myset.insert("ergererb");
myset.insert("wefcwcwe");
myset.insert("poihjn");
myset.insert("efwe");
set<string> :: iterator it = myset.find("wef");
if(it!=myset.end()){
    cout<<"found"<<endl;
    cout<<*it<<endl;
}
for(it = myset.begin();it!=myset.end();it++){
    cout<<*it<<endl;
}
it = myset.begin();

myset.erase(it,++it);
vector<int>v;
vector<int> :: iterator vit;
vit = v.begin();
vit = vit+1;
for(it = myset.begin();it!=myset.end();it++){
    cout<<*it<<endl;
}
}

