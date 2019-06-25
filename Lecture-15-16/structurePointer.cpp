#include<iostream>
using namespace std;
struct student{
    char arr[100];
    int age;
    student * bestfriend;
    ~student(){
    }

    student(){

    }

    student(char arr[100],int age,student* s1){
        int i=0;
        while(arr[i]!=0){
            this->arr[i] = arr[i];
            i++;
        }
        //this->arr[i] = 0;
        (*this).arr[i] = 0;
        (*this).age = age;
        bestfriend = s1;
    }

};
int main(){
student s1("abc",20,0);

student s3("abtyc",19,0);
student * s2 = new student("xyz",21,0);
s1.bestfriend = &s3;
cout<<s1.arr<<endl;
cout<<s1.age<<endl;
cout<<(*(s1.bestfriend)).arr<<endl;
cout<<(s1.bestfriend)->arr<<endl;
//s1.bestfriend = s2;

//(*s2).bestfriend = &s1;
s2->bestfriend = &s1;
cout<< s2->bestfriend->arr<<endl;

}




