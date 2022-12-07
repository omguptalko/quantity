// program to calculate the price of the products
#include<stdio.h>
#include<conio.h>
void main()
{
int qty ;
float total_price,rate ;
printf("enter the quantity and rate of product");
scanf("%d %f\n",&qty,&rate);
total_price= qty*rate ;
printf("total_price of product =%f\n",total_price);

if (total_price >=1000 )

printf("special offer 10% discount\n, total price to pay = %f\n",total_price);

}