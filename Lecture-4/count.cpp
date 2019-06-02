#include<iostream>
using namespace std;
int main(){
    char ch;
    ch = cin.get();
    int alphaCount = 0;
    int whiteSpaceCount = 0;
    int digitCount = 0;
    while(ch!='$'){
        if(ch>='0' && ch<='9'){
            digitCount++;
        }
        else if((ch>=65 && ch<='Z') || (ch>='a' && ch<='z')){
            alphaCount++;
        }
        else if(ch==32 || ch=='\t' || ch=='\n'){
            whiteSpaceCount++;
        }
        ch = cin.get();
    }
    cout<<whiteSpaceCount<<endl;
    cout<<alphaCount<<endl;
    cout<<digitCount<<endl;

}
