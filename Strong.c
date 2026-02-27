#include<stdio.h>
int main(){
    int n,r;
    scanf("%d",&n);
    int temp=n;
    int sum=0;;
    while(temp>0){
        r=temp%10;
        int fact=1;
        for(int i=1;i<=r;i++){
            fact=fact*i;
        }
        sum=sum+fact;
        temp=temp/10;
    }
    if(sum==n){
        printf("Strong number");
    }
    else{
        printf("Not a strong number");
    }
    return 0;
}
