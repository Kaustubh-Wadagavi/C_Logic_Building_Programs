/*
   Accept N numbers from user and return difference between frequency of
even number and odd numbers.
Input : N : 7
 Elements : 85 66 3 80 93 88 90
Output : 1 (4 -3) 
*/
#include<stdio.h>
#include<malloc.h>
int DiffCountEvenodd(int Arr[],int iLength)
{
	int i=0,iCnt1=0,iCnt2=0;
	if((Arr==NULL)||(iLength<0))
	{
		printf("There is no inserted Values");
		return -1;
	}

	for(i=0;i<iLength;i++)
	{
		if((Arr[i]%2)==0)
		{
			iCnt1++;
		}
		else
		{
			iCnt2++;
		}
	}
	return iCnt1-iCnt2;
}
int main()
{
	int iSize=0,i=0,j=0,iRet=0;
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
	iRet=DiffCountEvenodd(p,iSize);

	printf(" Difference between Even And odd Numbers of Elements is : %d",iRet);
	
	return 0;
}

