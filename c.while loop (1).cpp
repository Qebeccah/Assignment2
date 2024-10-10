//while loop- output numbers 
#include<stdio.h>
int main(){
int start,sum=0,stop;
printf("Enter the starting value:");
scanf("%d",&start);

printf("Enter the stop value:");
scanf("%d",&stop);
while(start<=stop){
printf("%d\n",start);
start++;
sum+=start;
}
printf("sum is%d", sum);
return 0;
}