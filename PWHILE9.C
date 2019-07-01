#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
     int n,r,c=0,rev=0;
     int revs=0,n1,temp;
     clrscr();
     printf("Enter a Number:");
     scanf("%d",&n);
     while(n>0)
     {
       r=n%10;
       rev=(rev*10)+r;
       n=n/10;
     }
     printf("\n Number is: %d",rev);
    // r=0;
    temp=revs;
    while(rev>0)
     {
       r=rev%10;
       if(r==0)
       {
		printf("\n zero");
       }
       else if(r==1)
       {
		printf("\n one");
       }
       else if(r==2)
       {
		printf("\n two");
       }
       else if(r==3)
       {
		printf("\n three");
       }
	else if(r==4)
       {
		printf("\n four");
       }
	else if(r==5)
       {
		printf("\n five");
       }
	else if(r==6)
       {
		printf("\n six");
       }
	else if(r==7)
       {
		printf("\n seven");
       }
	else if(r==8)
       {
		printf("\n Eight");
       }
	else if(r==9)
       {
		printf("\n Nine");
       }

       revs=(revs*10)+r;
       rev=rev/10;
     }
     printf("\n Number is: %d",revs);
     getch();

}