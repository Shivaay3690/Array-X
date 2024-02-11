#include<iostream>
using namespace std;
 void printArray(int arr[],int n){
     for(int i = 0;i<n; i++){
     cout<<arr[i]<<" ";
 }
 }
 //insertion method in array of an element
int indinsertion(int arr[],int size,int element,int capacity,int index){
    if(size>=capacity){
        return -1;
    }
    for(int i = size-1; i >= index; i--){
        arr[i+1] = arr[i];
    }
    arr[index] = element; 
    return 1;
}
int main(){
    int arr[100] = {7,8,12,27,88};
    int size = 5,element = 100,index = 0;
    indinsertion(arr, size, element, 100, index);
    size+=1;
    printArray(arr,size);
}
 
