//Bubble Sort tch
#include<stdio.h>
#include<conio.h>
#define MAX 100
void main()
{
	int a[MAX],n,i,j,temp;
	clrscr();
	printf("\n Enter a Number:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
     //	printf("\n Bubble Sort is:");
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}

		}
	}
	printf("\n Bubble Sort is:");
	for(i=0;i<n;i++)
	{
		printf(" %d ",a[i]);
	}
getch();
}