//Linear Search and occurance of number
#include<stdio.h>
#include<conio.h>
#define MAX 100
void main()
{
	int a[MAX],i,j,n,s,c=0;
	clrscr();
	printf("\n Enter a Element");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n Enter  Search Element:");
	scanf("%d",&s);
	for(j=0;j<n;j++)
	{
		if(s==a[j])
		{
			c=c+1;
		     //	printf("\n Element is found= %d",s);
		   //	break;
		}
	}
      //	printf("\n Element not found");
	printf("\n Element occurance is %d= %d",s,c);



getch();
}