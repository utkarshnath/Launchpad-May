#include<iostream>
using namespace std;
int main(){
 char arr1[100];
 char arr2[100];
 cin.getline(arr1,100);
 cin.getline(arr2,100);
 int freq[256] = {0};
 for(int i=0;arr1[i]!='\0';i++){
    char c = arr1[i];
    freq[c]++;
 }
  for(int i=0;arr2[i]!='\0';i++){
    freq[arr2[i]]--;
 }
 for(int i=0;i<256;i++){
    if(freq[i]!=0){
        cout<<"Not Permutations"<<endl;
        return;
    }
 }
 cout<<"Permutations"<<endl;
}







