#include<iostream>
using namespace std;
int main(){
    /*
cout<<sizeof(char)<<endl;
cout<<sizeof(long long)<<endl;
int i = 5;
char a = 'A';
cout<< sizeof(i)<<endl;
cout<< sizeof(a+i)<<endl;
cout<<a+i<<endl;

*/
char a = 'A';
cout<<(int)('T')<<endl;
cout<<(char)(65)<<endl;
int i=0;

while(i<5){
    cout<<(char)(a+300)<<" ";
    i = i+1;
}
cout<<endl;

}
