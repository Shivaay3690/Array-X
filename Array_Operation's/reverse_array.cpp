#include<iostream>
using namespace std;
void reverse(int a[],int n){
    int start = 0;
    int end = n-1;
    while(start<=end){
        swap(a[start],a[end]);
        start++;
        end--;
    }
}
void printArray(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int a[6]={1,4,7,3,8,12};
    int b[5]={23,45,21,66,44};
    reverse(a,6);
    reverse(b,5);
    printArray(a,6);
    printArray(b,5);
    return 0;
}
