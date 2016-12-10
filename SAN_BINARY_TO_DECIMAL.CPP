#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()    // Binary To Decimal
{	clrscr();
	long int n ;
	int j,i,x[10],c=0,sum=0;
	printf("Enter Number");        //ask out
	scanf("%ld",&n);
	i=0;
	while(n!=0)                //Divide and rule
       {	x[i]=n%10;
		n=n/10;
		i++;
		c++;
       }
	for(i=0;i<=c-1;i++)
	{
	sum+=pow(2,i)*x[i];                 //Process
	}
	printf("%d",sum);                       //the Answer
	getch();}