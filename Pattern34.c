//Program to print Below Pattern
/*Input : iRow = 6 iCol = 6
Output : * * * * * *
		 * # # # * *
		 * # # * $ *
		 * # * $ $ *
		 * * $ $ $ *
		 * * * * * * 
*/
#include<stdio.h>
void Pattern(int iRow,int iCol)
{
	int i=0,j=0;
	
	for(i=iRow;i>=1;i--)
	{
		for(j=1;j<=iCol;j++)
		{
			if((i==j)||(i==1)||(i==iRow)||(j==1)||(j==iCol))
			{
				printf("*\t");
			}
			else if(i>j)
			{
				printf("#\t");
			}
			else
			{
				printf("$\t");
			}
			
		}
		printf("\n");
	}
}
int main()
{
	int iValue1=0,iValue2=0;

	printf("Enter Number of rows : ");
	scanf("%d",&iValue1);

	printf("Enter Number of columns : ");
	scanf("%d",&iValue2);

	Pattern(iValue1,iValue2);

	return 0;
}