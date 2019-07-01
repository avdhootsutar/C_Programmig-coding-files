//Bubble Sort
#include<stdio.h>
#include<conio.h>
#define MAX 100
void main()
{
	int a[MAX],i,j,k,n,temp;
	clrscr();
	printf("\n Enter a Element");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	   for(k=i;k<n;k++)
	   {
		if(a[i] > a[k])
		{
			temp=a[i];
			a[i]=a[k];
			a[k]=temp;

		   //	printf("\n Accending order is :%d",temp);
	       }

		printf(" %d ",a[i]);

	   }

	}

getch();
}