#include<stdio.h>
int main(){
    int n,r;
    scanf("%d",&n);
    while(n!=1 && n!=4){
    int sum=0;
    int temp=n;
    while(temp>0){
        r=temp%10;
        int sq=r*r;
        sum=sum+sq;
        temp=temp/10;
    }
    n=sum;
    }
    if(n==1){
        printf("Happy number");
    }
    else{
        printf("Not a happy number");
    }
    return 0;
}
