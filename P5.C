#include<stdio.h>
#include<math.h>

int main(){
    int number,orginal_n,number2,sum=0,remainder,count=0;

    printf("Enter a number:");
    scanf("%d",&number);

    orginal_n = number;
    number2 = number; 

    while(orginal_n>0){
        orginal_n = orginal_n/10;
        count++;
        
    }

    while(number>0){
        remainder = number%10;
        sum = sum+pow(remainder,count);
        number = number/10;
    }

    if(sum == number2){
        printf("%d is a armstrong number\n",number2);
    }
    else{
        printf("%d is not a armstrong number\n",number2);
    }

    return 0;
}
