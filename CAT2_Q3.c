#include<stdio.h>
int main() {
	float hours,hourly_wage,gross_pay,tax,net_pay;

	printf("enter the hours worked in a week:");
	scanf("%f",&hours);
	printf("enter hourly wage:");
	scanf("%f",&hourly_wage);
//calculate the grosspay;
	if(hours>40){
		gross_pay=(40*hourly_wage) + ((hours-40)*hourly_wage*1.5);
		} else {
			gross_pay=hours*hourly_wage;
			}
//calculate the tax
			if(gross_pay<=600){
				tax=gross_pay*0.15;
			} else {
				tax=(600*0.15) + ((gross_pay-600)*0.20);

			}
//calculate the net pay
net_pay=gross_pay-tax;
     
	 printf("gross pay:$%.2f\n",gross_pay);
	 printf("tax:$%.2f\n",tax);
	 printf("net pay:$%.2f\n",net_pay);
	 
	return 0;
	}
