#include<stdio.h>
int main(){
    int number,sum=0;
    float average;
    printf("Enter numbers:");
    for(int i=1;i<=10;i++){
    scanf("%d",&number);
       sum=sum+number;
    }
    average = sum/10.0;
 
    printf("Sum = %d\n",sum);
    printf("Average = %.2f\n",average);

    return 0;
}
