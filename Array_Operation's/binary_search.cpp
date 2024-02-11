#include<iostream>
using namespace std;
int binay_search(int arr[],int size,int key){
    int start = 0;
    int  end=size-1;
    int mid = (start+end)/2;
    while(start <= end){
        if(arr[mid]==key){
            return mid;
        }
        if(key>arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid=(start + end)/2;
    }
        return -1;
}
int main(){
int even[6]={23,12,43,13,56,78};
int odd[5]={11,4,2,7,34};
int index = binay_search(even,6,56);
cout<<"Index of 56 is:"<<index<<endl;
}