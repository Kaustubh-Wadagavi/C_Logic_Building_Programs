/*
  Accept N numbers from user and accept Range, Display all elements from
that range
Input : N : 6
 Start: 60

 End : 90

 Elements : 85 66 3 76 93 88
Output : 66 76 88
Input : N : 6
 Start: 30

 End : 50

 Elements : 85 66 3 76 93 88 
*/
#include<stdio.h>
#include<malloc.h>


void ElementsBetwweenRange(int Arr[],int iLength,int iStart,int iEnd)
{
	int i=0;
	if((Arr==NULL)||(iLength<0))
	{
		printf("There is no inserted Values");
		return ;
	}

	for(i=0;i<iLength;i++)
	{
		if((Arr[i]>=iStart)&&(Arr[i]<=iEnd))
		{
			printf("%d\t",Arr[i]);
		}
	}
	
	
}
int main()
{
	int iSize=0,i=0,j=0;
	int iStart=0,iEnd=0;
	int *p=NULL;

	printf("Enter Number of elements : ");
	scanf("%d",&iSize);

	p=((int*)malloc(iSize*(sizeof(int))));
	if(p==NULL)
	{
		printf("Unable to allocate memory");
		return -1;
	}

	printf("Enter the elements :");
	for(i=0;i<iSize;i++)
	{
		scanf("%d",&p[i]);
	}

	printf("Entered Elements are : ");
	for(j=0;j<iSize;j++)
	{
		printf("%d\t",p[j]);
	}
	printf("\n");

	printf("Enter Starting range : ");
	scanf("%d",&iStart);

	printf("Enter Ending range : ");
	scanf("%d",&iEnd);
	
	printf("\n");
	ElementsBetwweenRange(p,iSize,iStart,iEnd);
	
	
	return 0;
}

