#include<stdio.h>
#include<conio.h>
void main()
{
	int i=1,n;
	clrscr();
	printf("\n\nEnter number:");
	scanf("%d",&n);
	while(i<=n)
	{
		  if(n%i==0)
		printf("%d",i);
		i++;
	}


getch();
}