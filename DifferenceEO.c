/*
Accept N numbers from user and return difference between 
summession of even and odd elements
Input : N : 6
Elements : 85 66 3 80 93 88
Output : 53 (234 - 181)
*/
#include<stdio.h>
#include<malloc.h>
int DifferenceEO(int Arr[],int iLength)
{
	int iSumEven=0, iSumOdd=0,i=0;
	if((Arr==NULL)||(iLength<0))
	{
		return -2;
	}

	for(i=0;i<iLength;i++)
	{
		if((Arr[i]%2)==0)
		{
			iSumEven=iSumEven+Arr[i];
		}
		else
		{
			iSumOdd=iSumOdd+Arr[i];
		}
	}
	return iSumEven-iSumOdd;
}
int main()
{
	int iSize=0,iRet=0,i=0,j=0;
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
		printf("%d",p[j]);
	}

	iRet=DifferenceEO(p,iSize);
	printf("\n");
	printf("Difference between Summesion of Even and odd element is : %d\t",iRet);

	return 0;
}

