#include<iostream>
using namespace std;
int main(){
 int a[5],i,max;
 cout<<"Enter 5 number:"<<endl;
   for(i=0;i<5;i++)
      cin>>a[i];
     max=a[0];
  for(i=1;i<=4;i++)
     if(max<a[i])
     max=a[i];
     cout<<"the greatest number is "<< max <<endl;
}