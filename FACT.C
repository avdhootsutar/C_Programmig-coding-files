#include<stdio.h>
#include<conio.h>
void main()
{
	int n,fact=1;
	clrscr();
	printf("\n Enter a Number:");
	scanf("%d",&n);
	while(n>1)
	{
		fact=fact*n;
		n=n-1;
	}
	printf("\n Factorial is: %d",fact);

getch();
}