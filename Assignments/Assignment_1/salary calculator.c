#include<stdio.h>
int main(){
	float basic,da,ta,hra,total;
	
	printf("enter your basic salary:");
    scanf("%f",&basic);
	
	if(basic<=5000)	{
		da = basic*0.10;
		ta = basic*0.20;
		hra = basic*0.25;
	}else{
		da = basic*0.15;
		ta = basic*0.25;
		hra = basic*0.30;
	}
	
	total =  basic + da + ta + hra;
	
	printf("DA = %f \n",da);
	printf("TA = %f \n",ta);
		printf("HRA = %f \n",hra);
		printf("total salary = %f",total);
}