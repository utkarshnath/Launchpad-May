#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    int arr[10] = {4,3,1,-3,6};
    unordered_set<int> myset;
    for(int i=0;i<5;i++){
        unordered_set<int> :: iterator it;
        if(myset.end()!=myset.find(-1*arr[i])){
            cout<<arr[i]<<" "<<-1*arr[i]<<endl;
            myset.erase(-1*arr[i]));
        }else{
            myset.insert(arr[i]);
        }
    }
}
