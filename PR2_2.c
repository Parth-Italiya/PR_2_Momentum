/*
enter unit :450
total = 525
bill = 630
*/

#include<stdio.h>

void main(){

	int sum,surcharge,bill;
	float u;


	printf("enter unit :");
	scanf("%f",&u);

	if(u<=50){
		sum=u*0.50;
	}else if(u<=150){
		sum=(u-50)*0.75+25;
	}else if(u<=250){
		sum=(u-150)*1.25+100;
	}else {
		sum=(u-250)*1.50+225;
	}
	printf("total = %.2d\n",sum);

	surcharge=sum*20/100;
	bill=sum+surcharge;

	printf("bill = %.2d\n",bill);


}
