#include<stdio.h>
#include<conio.h>
void main()
{	int i,j,k;
	char c='A';
	clrscr();                                 //meh :3
	for(i=1;i<=5;i++)
	{
		for(k=5;k>=i;k--)
		{	printf(" ");
		}
		for(j=1;j<=i;j++)
		{	printf("%d ",j);         //change to i for same no. in each line,j for starting no. in each line,c for using char
	       //		  c++;           // diff chars but start again in every line if combined with line 17
		}
	       //	c++;                    //same letter for every line
	       //	c='A';			//to start again
		printf("\n");
	}
	getch();
}