#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i=1;
	clrscr();
	printf("\n Enter a number:");
	scanf("%d",&n);

	while(i<=n)
	{
	    if(i%2==0)
	    {
		printf("\n Number is:%d",i);
		i++;
	    }
	}

getch();
}