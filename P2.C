#include<stdio.h>

int main(){
    int n,sum=0,a=-1;

    printf("How many terms:");
    scanf("%d",&n);
       printf("%d terms of odd natural number= ",n);
    for(int i=1;i<=n;i++){
        a=a+2;
        printf("%d ",a);
        sum=sum+a;
    }
    printf("\n");

    printf("Sum = %d\n",sum);

    return 0;
}
