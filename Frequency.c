/*
   Accept N numbers from user and accept one another number as NO ,
return frequency of NO form it.

Input : N : 6
 NO: 66
 Elements : 85 66 3 66 93 88
Output : 2
Input : N : 6
 NO: 12
 Elements : 85 11 3 15 11 111
Output : 0  
*/
#include<stdio.h>
#include<malloc.h>


int Frequency(int Arr[],int iLength,int iNo)
{
	int i=0,iCnt=0;
	if((Arr==NULL)||(iLength<0))
	{
		printf("There is no inserted Values");
		return -1;
	}

	for(i=0;i<iLength;i++)
	{
		if((Arr[i]==iNo))
		{
			iCnt++;
		}
	}
	return iCnt;
}
int main()
{
	int iSize=0,i=0,j=0,iValue=0;
	int iRet=0;
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

	printf("Enter the Number which you Have to Count : ");
	scanf("%d",&iValue);
	
	printf("\n");
	iRet=Frequency(p,iSize,iValue);
	printf("Number of Count is : %d",iRet);
	
	
	return 0;
}

