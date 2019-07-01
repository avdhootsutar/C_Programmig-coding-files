//sum of even degite
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,r,sum=0;
	clrscr();
	printf("\n enter a even number:");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		if(r%2==0)
		{
			sum=sum+r;
		}
		n=n/10;

	}

getch();
}