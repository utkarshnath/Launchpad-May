#include<iostream>
using namespace std;
int main(){
    char ch;
    ch = cin.get();
    int lineCount=0,wordCount=0,charCount=0;
    int wordLength = 0;
    while(ch!='$'){
        charCount++;
        if(ch==' ' || ch=='\t'){
            if(wordLength>0){
                wordCount++;
                wordLength = 0;
            }
        }else if(ch=='\n'){
            lineCount++;
            if(wordLength>0){
                wordCount++;
                wordLength = 0;
            }
        }else{
            wordLength++;
        }
        ch = cin.get();
    }
    if(wordLength>0){
        wordCount++;
    }
    cout<<"char "<<charCount<<endl;
    cout<<"word "<<wordCount<<endl;
    cout<<"line "<<lineCount+1<<endl;
}
