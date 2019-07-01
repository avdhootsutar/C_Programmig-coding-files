// sum of degits
#include<stdio.h>
#include<conio.h>

void main()
{
       long int n;
       int r,sum=0;
	clrscr();
	printf("\n Enter a number:");
	scanf("%ld",&n);
	while(n>0)
	{     r=n%10;
	      sum=sum+r;
	      n=n/10;

	}
	printf("\n sum is :%d",sum);

getch();
}