#include<iostream>
using namespace std;
bool search(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}
int main(){//function definition
    int arr[5]={12,34,32,98,-1},i;
    cout<<"enter the element to search for"<<endl;
    int key;
    cin>>key;
    bool found=search(arr,5,key);
    if(found){
        cout<<"key is present"<<endl;
    }
    else{
        cout<<"key is absent"<<endl;
    }
    return 0;
}
