#include<stdio.h>

int main(){
    int number,m,reverse=0;

    printf("Enter a number:");
    scanf("%d",&number);

    while(number>0){
        m = number%10;
        reverse = (reverse*10)+m;
        number = number/10;
    }

    printf("Reverse number = %d\n",reverse);

    return 0;
}
