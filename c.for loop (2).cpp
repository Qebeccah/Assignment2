//for loop- output numbers
/*
Author:kirika wangui
Date:11/2/10/2024
*/
#include<stdio.h>
int main(){

int start,sum=0, stop;
printf("Enter the start value:");
scanf("%d",& start);
printf("Enter the stop value:");
scanf("%d",&stop);

for(start;start<=stop;start++){
printf("%d\n",start);
sum+=start;
}
printf("sum is %d",sum);
return 0;
}
    