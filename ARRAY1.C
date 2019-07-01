#include<stdio.h>
#include<conio.h>
void main()
{
	int a[3][2],i,j;
	clrscr();
	printf("\n Enter a Arrays Elements:");
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n Element are:");
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			printf(" %d ",a[i][j]);
		}
	}
getch();
}