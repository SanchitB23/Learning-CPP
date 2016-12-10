#include<stdio.h>
#include<conio.h>
void main()
{       clrscr();
	int i , n , y , x[10] , c=0 ;
	printf("Enter a number");
	scanf("%d",&n);
	for(i=0;i<=10;i++)
	{      x[i]=n%2; //remainder
		n=n/2; //quotient
		c++;
		if(n==0 || n==1)
		break;
	}
	printf("%d",n);

	for(i=c-1;i>=0;i--)
	{	printf("%d",x[i]);
	}

	getch();
}