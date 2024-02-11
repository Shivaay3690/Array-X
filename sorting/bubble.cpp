#include<iostream>
using namespace std;
void printArray(int *A,int n){
    for(int i=0;i<n;i++){
        cout<<A[i]<<endl;
    }
     cout<<" "<<endl;
}
void bubbleSort(int *A,int n){
    int temp;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
          if(A[j]>A[j+1]){
            temp=A[j];
            A[j]=A[j+1];
            A[j+1]=temp;
          }
        }
    }
}
int main(){
    int A[]={77,25,88,40,90,55,65,95};
    //int A2[]={12,54,65,7,23,9};
    int n=8;
    
    printArray(A,n);
    bubbleSort(A,n);
    printArray(A,n);
    return 0;
}