#include<iostream>
using namespace std;
int main(){
    int a[5]={21,34,55,35,67},check,i;
    cout<<"enter the element for checking:-";
    cin>>check;
    for(i=0;i<5;i++){
        if(check==a[i]){
            cout<<"found at index no:"<<i<<endl;
        }
    }
}