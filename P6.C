#include<stdio.h>

int main(){
    int number,m,sum=0;

    printf("Enter a number:");
    scanf("%d",&number);

    while(number>0){
        m = number%10;
        sum = sum+m;
        number = number/10;
    }

    printf("Sum of digits = %d\n",sum);

    return 0;
}
