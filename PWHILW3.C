#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i=1;
	clrscr();
	printf("\nEnter number:");
	scanf("%d",&n);
	while(i<=n)
	{
		if(i%2!=0)
		{
			printf("\n Number is odd %d",i);
		}
		i++;
	}


getch();
}