#include<iostream>
using namespace std;
int main(){
    int pos,i,a[5] = {5,2,6,16,12};
    cout<<"enter the position number:";
    cin>>pos;//position=jis element ko delete krna hai uska position:
    for(i=pos;i<5;i++)
    a[i] = a[i+1];
    for(i=0;i<4;i++)
    cout<<a[i]<<" ";
}