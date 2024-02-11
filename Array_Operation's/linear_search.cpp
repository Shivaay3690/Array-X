#include<iostream>
using namespace std;
int main(){
    int i,x,arr[5]={12,34,22,45,65};
     cout<<"enter the number for checking: "<<endl;
     for(i=0;i<5;i++){
        if(arr[i]==x){
            cout<<"found at index number"<<i<<endl;
        }
     }
}