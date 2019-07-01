//Convert Decimal value to Binary,Octal,Hexa
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,a[10],b,r,i=0,j;
	clrscr();
	printf("\n Enter a number:");
	scanf("%d",&n);
	printf("\n Enter a Base:");
	scanf("%d",&b);
	while(n>0)
	{
		r=n%b;
		if(r<10)
		{
			r=r+48;
		}
		else
		{
			r=r+55;
		}
		a[i]=r;
		n=n/b;
		i++;
	}
	printf("\n Number is:");
	for(j=i-1;j>=0;j--)
	{
		printf("%c",a[j]);
	}

getch();
}
