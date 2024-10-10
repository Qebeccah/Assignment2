//program to calculate the fine for overdue library books
#include <stdio.h>
# include<math.h>
int main(){

int customer_id;
int customer_name;
int units_consumed;
int charges_per_unit;
int total_bill;
int surcharge;
int minimum_bill;

printf("Enter the Customer ID:");
scanf("%d",& customer_id);
printf("Enter the customer name:");
scanf("%s",& customer_name);
printf("Enter the units consumed in meters:");
scanf("%d",&units_consumed);

if (units_consumed<=199) {
charges_per_unit=1.20;
total_bill=units_consumed*charges_per_unit+surcharge;
printf("total bill is%d\n",total_bill);
}
else if(units_consumed>=200){
charges_per_unit=1.50;
total_bill=units_consumed*charges_per_unit+surcharge;
printf("total bill is%d\n",total_bill);
}
else if(units_consumed>=400){
charges_per_unit=1.80;
total_bill=units_consumed*charges_per_unit+surcharge;
printf("total bill is%d\n",total_bill);
}
else(units_consumed>=600);{
charges_per_unit=2.00;
total_bill=units_consumed*charges_per_unit+surcharge;
printf("total bill is%d\n",total_bill);
}
printf("customer_id is%d\n", customer_id);
printf("customer_name is%s\n", customer_name);
printf("units_consumed is%d\n",units_consumed);
printf("charges_per_unit is%d\n",charges_per_unit);
printf("surcharge is%d\n",surcharge);
printf("total_bill is%d",total_bill);
 return 0;
 }        
        