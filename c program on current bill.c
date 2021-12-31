#include<stdio.h>
void main()
{
	float units,bill,surchase,totalamount;
	printf("enter no of units");
	scanf("%f",&units);
	if(units<199)
	{
		bill=units*1.20;
		printf(" bill amount is %f",bill);
		
	}
	else if(units>=200 && units<400)
	{
		bill=units*1.50;
		printf(" bill amount is %f",bill);
		
	}
	else if(units>=400 && units<600)
	{
		bill=units*1.80;
		printf(" bill amount is %f",bill);
		
	}
	else if(units>=600)
	{
		bill=units*2.00;
		printf(" bill amount is %f",bill);
	}
	if(bill>400)
	{
		surchase=bill/100*15;
		printf("\nsurchase amount is %f",surchase);
	}
	else
	{
		printf("\nsurchase amount=0");
	}
		totalamount=bill+surchase;
		printf("\ntotal amount is %f",totalamount);
}

























