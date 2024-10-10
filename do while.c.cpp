//do while loop- output numbers
/*
Author:kirika wangui
Date:11/10/2024
*/
# include<stdio.h>
int main(){
int start,sum=0, stop;

printf("Enter the start value:");
scanf("%d",&start);
printf("Enter the stop value:");
scanf("%d",&stop);
do{
printf("%d\n", start);
start++;
}
while(start<=stop);
sum+=start;
printf("sum is %d", sum);
return 0;
}