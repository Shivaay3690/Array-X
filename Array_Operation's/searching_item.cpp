#include <iostream>
using namespace std;

int main() {
int t;
cin>>t;
while(t--){
    int x[10]={4,7,8,17,13};
    cin>>x[10];
    for(int i=0;i<10;i++){
        if(x[i]==7){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }
    }
}
    return 0;
}
