#include<stdio.h>
int main(){
int i,sum,range;
int first_number=0,second_number=1;
printf("how many number you want for the fibonacci series: ");
scanf("%d",&range);
printf("Fibonacci series:\n");
for (i=0; i<range; i++){
if (i <= 1)
sum = i;
else {
sum = first_number + second_number;
first_number = second_number;
second_number = sum;
}
printf("%d",sum);
}
return 0;
}
