//Prime number
#include<stdio.h>
#include<conio.h>
void main()
{	int n,i=1,c=0;
	clrscr();
	printf("\n Enter a number:");
	scanf("%d",&n);
	while(i<=n)
	{
		if(n%i==0)
		{
			c++;
		}
		i++;
	}
		if(c==2)
		{
			printf("\n Number is Prime %d:",n);
		}
		else
		{
			printf("\n Number is Not Prime %d:",n);
		}



getch();
}