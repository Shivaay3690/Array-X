#include<iostream>
using namespace std;
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[10]={23,45,32,144,222,221};
    printArray(arr,6); 
    return 0;
}