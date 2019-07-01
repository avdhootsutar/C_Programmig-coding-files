//prime number is 1 To 100
#include<stdio.h>
#include<conio.h>
void main()
{
	int n=1,i,c;
	clrscr();
	while(n<10)
	{
		i=1;
		c=0;
		while(n>i)
		{
			if(n%i==0)
			{
				c++;
			}
			i++;
		}
	       n++;
  /*		if(c==2)
	{
		printf("\n Number is prime:%d",n);
	} */

	}
	if(c==2)
	{
		printf("\n Number is Print:%d",n);
	}




getch();
}