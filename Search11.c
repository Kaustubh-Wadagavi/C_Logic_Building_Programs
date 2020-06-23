/*
   Accept N numbers from user check whether that numbers contains 11 in
it or not.
Input : N : 6
 Elements : 85 66 11 80 93 88
Output : 11 is present
Input : N : 6
 Elements : 85 66 3 80 93 88 
*/
#include<stdio.h>
#include<malloc.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL SearchEleven(int Arr[],int iLength)
{
	int i=0;
	if((Arr==NULL)||(iLength<0))
	{
		printf("There is no inserted Values");
		return -1;
	}

	for(i=0;i<iLength;i++)
	{
		if((Arr[i]==11))
		{
			break;
		}
	}
	if(i==iLength)
	{
		return FALSE;
	}
	else
	{
		return TRUE;
	}
}
int main()
{
	int iSize=0,i=0,j=0;
	BOOL bRet=FALSE;
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
	bRet=SearchEleven(p,iSize);

	if(bRet==FALSE)
	{
		printf("11 is not Present");
	}
	else
	{
		printf("11 is Present");
	}
	
	return 0;
}

