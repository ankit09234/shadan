#include<stdio.h>
#include<conio.h>
void main()
	{
	float a,b;
	float sum=0,pro=1,div=1,avg=1;
	clrscr();
	printf("entertwo numbers\n");
	scanf("%f%f",&a,&b);
	sum=a+b;
	printf("Sum=%f",sum);
	pro=a*b;
	printf("\nProduct=%f",pro);
	div=a/b;
	printf("\nQuotient=%f",div);
	avg=(a+b)/2;
	printf("\nAverage=%f",avg);
	getch();








}
