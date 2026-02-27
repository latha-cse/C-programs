#include<stdio.h>
#include<math.h>
int main(){
    int num1,num2;
    scanf("%d%d",&num1,&num2);
    int sum1=0,sum2=0;
    while(num1>0){
        int r=num1%10;
        sum1+=pow(10,r);
        num1=num1/10;
    }
     while(num2>0){
        int r1=num2%10;
        sum2+=pow(10,r1);
        num2=num2/10;
    }
    if(sum1==sum2){
        printf("Anagram");
    }
    else{
        printf("Not a anagramnumber");
    }
    return 0;
}
