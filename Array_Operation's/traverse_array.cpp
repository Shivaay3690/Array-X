#include<iostream>                                
using namespace std;

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
}
int main(){
    int arr[100]={1,2,6,78,66,432};
    printArray(arr,6);
    return 0;
}
