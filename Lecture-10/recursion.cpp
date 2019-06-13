#include<iostream>
using namespace std;
int power(int x,int n){
    if(n==0){
        return 1;
    }
    return power(x,n-1)*x;
}
void print(int n){
    switch(n){
    case 0:
        cout<<"Zero"<<endl;
        break;
    case 1:
        cout<<"One"<<endl;
        break;
    case 2:
        cout<<"Two"<<endl;
        break;
    case 3:
        cout<<"Three"<<endl;
        break;
    default:
        cout<<"None"<<endl;
    }
    return;
}
void printNum(int n){
    if(n<10){
        print(n);
        return;
    }
    int x = n%10;
    printNum(n/10);
    print(x);
    return;
}
bool checkSeven(int arr[],int n,int i){
    if(i==n){
        return false;
    }
    bool curr = (arr[i]==7);
    if(curr){
        return true;
    }
    return checkSeven(arr,n,i+1);
}
int firstSeven(int arr[],int n,int i){
    if(i==n){
        return -1;
    }
    if(arr[i]==7){
        return i;
    }
    return firstSeven(arr,n,i+1);
}
int lastSeven(int arr[],int n,int i){
    if(n==i){
        return -1;
    }
    int index = lastSeven(arr,n,i+1);
    if(index!=-1){
        return index;
    }
    if(arr[i]==7){
        return i;
    }
    return -1;
}
void allSeven(int arr[],int n,int i){
    if(i==n){
        return;
    }
    allSeven(arr,n,i+1);
    if(arr[i]==7){
        cout<<i<<endl;
    }

    return;
}
void bubbleSort(int arr[],int n,int i){
    if(n==0 || n==1){
        return;
    }
    if(i==n-1){
        bubbleSort(arr,n-1,0);
        return;
    }
    if(arr[i]>arr[i+1]){
        int temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
    }
    bubbleSort(arr,n,i+1);
    return;
}
bool binarySearch(int arr[],int start,int end,int k){
    if(start>end){
        return false;
    }
    int mid = (start+end)/2;
    if(arr[mid]==k){
        return true;
    }
    if(arr[mid]>k){
        return binarySearch(arr,start,mid-1,k);
    }
    return binarySearch(arr,mid+1,end,k);
}
int stringToInt(char arr[]){
    if(arr[0]=='\0'){
        return 0;
    }
    int n = strlen(arr);
    int last = arr[n-1]-48;
    arr[n-1] = '\0';
    int curr = stringToInt(arr);
    return curr*10 + last;
}
int main(){
int arr[10] = {1,2,3,4,6};
cout<<checkSeven(arr,5,0)<<endl;
cout<<firstSeven(arr,5,0)<<endl;
cout<<binarySearch(arr,0,5,2)<<endl;;
char arr1[100] = "1123";
cout<<stringToInt(arr1)<<endl;
}










