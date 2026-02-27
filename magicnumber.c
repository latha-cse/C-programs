#include<stdio.h>
int main(){
    int n,r,r1,rev=0,sum=0;
    scanf("%d",&n);
    int temp=n;
    while(temp>0){
        r=temp%10;
        sum=sum+r;
        temp=temp/10;
    }
    int tempsum=sum;
    while(tempsum>0){
        r1=tempsum%10;
        rev=rev*10+r1;
        tempsum=tempsum/10;
    }
    int mul=sum*rev;
    if(n==mul){
        printf("Magic number");
    }
    else{
        printf("Not a magic number");
    }
    return 0;
}
