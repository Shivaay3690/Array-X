#include<stdio.h>
void hanoi_tower(char,char,char,int);
void hanoi_tower(char peg1,char peg2,char peg3,int n){
    if(n<=0)
    printf("\nIllegal entry");
    if(n==1)
    printf("\n move disk from %c to %c",peg1,peg3);
    else{
        hanoi_tower(peg1,peg3,peg2,n-1);
        hanoi_tower(peg1,peg2,peg3,1);
        hanoi_tower(peg2,peg1,peg3,n-1);
    }
}
void main(){
    int n;
     printf("\ninput the number of disks:");
     scanf("%d",&n);
     printf("\ntower of hanoi for %d disk",n);
      hanoi_tower('X','Y','Z',n);
}