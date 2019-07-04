#include<iostream>
#include<vector>
using namespace std;
// min heap
class heap{
    vector<int> v;

    void heapify(int index){
        int left = 2*index;
        int right = 2*index+1;
        int curr = v[index];
        int minIndex = index;
        if(left< v.size() && v[left]<curr){
            minIndex = left;
        }
        if(right< v.size() && v[right]<v[minIndex]){
            minIndex = right;
        }
        swap(v[index],v[minIndex]);
        if(minIndex!=index){
            heapify(minIndex);
        }
    }
public:
    heap(){
        v.push_back(-1);
    }
    bool isEmpty(){
        return v.size()==1;
    }
    void addElement(int data){
        v.push_back(data);
        int index = v.size()-1;
        while(index>1 && v[index] < v[index/2]){
            int temp = v[index];
            v[index] = v[index/2];
            v[index/2] = temp;
            index = index/2;
        }
    }
    int extractMin(){
        int min = v[1];
        v[1] = v[v.size()-1];
        v.pop_back();
        heapify(1);
        return min;
    }
    void print(){
        for(int i=1;i<v.size();i++){
            cout<<v[i]<<" ";
        }
    }
};
int main(){
heap h;
h.addElement(1);h.addElement(2);h.addElement(3);h.addElement(17);
h.addElement(19);h.addElement(36);h.addElement(7);
h.addElement(25);h.addElement(100);
h.print();
cout<<endl;
cout<<h.extractMin()<<endl;
h.print();
cout<<endl;
}





