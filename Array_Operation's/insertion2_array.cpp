#include<iostream>
using namespace std;
int main(){
    int a[100] = {3,2,1,8,12};
    int index,num,i;
    cout<<"enter the index and num" ;
    cin>>index>>num;
    for(i = 4; i >= index; i--)
     a[i+1]=a[i];
     a[index]=num;
     cout<<"new array:- "<<" ";
     for(i=0;i<6;i++)
     cout<<a[i]<<" ";
    }