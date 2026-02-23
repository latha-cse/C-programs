#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d",&n);
    int sq,r,rev=0;
    sq=n*n;
    while(n>0){
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    int sq1=rev*rev;
    int r1,rev1=0;
    while(sq1>0){
        r1=sq1%10;
        rev1=rev1*10+r1;
        sq1=sq1/10;
    }
    if(sq==rev1){
        printf("Adam");
    }
    else{
        printf("Not a adam number");
    }
    return 0;
}
