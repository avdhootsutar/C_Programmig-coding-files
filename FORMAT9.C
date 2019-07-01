#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k,l,m,n;
	clrscr();
	for(i=1;i<=5;i++)
	{
		printf("\n\n");
		for(j=1,m=65;j<=i;j++)
		{       printf("%c",m);
			m++;
		     //	printf(" *");
		}
		for(k=1;k<=5-i;k++)
		{
			printf("  ");
		}
		for(l=1,m=65;l<=i;l++)
		{
			printf("%c",m);
			m++;
		      //	printf("* ");
		}
	}
getch();
}