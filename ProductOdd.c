/*
  Accept N numbers from user and return product of all odd elements.
Input : N : 6

 Elements : 15 66 3 70 10 88
Output : 45
Input : N : 6

 Elements : 44 66 72 70 10 88
Output : 0 
*/
#include<stdio.h>
#include<malloc.h>


int ProductOdd(int Arr[],int iLength)
{
	int i=0,iMult=0;
	if((Arr==NULL)||(iLength<0))
	{
		printf("There is no inserted Values");
		return -1;
	}
	iMult=1;
	for(i=0;i<iLength;i++)
	{
		if((Arr[i]%2)!=0)
		{
			iMult=iMult*Arr[i];
		}
	}
	return iMult;
	
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
	iRet=ProductOdd(p,iSize);
	printf("\n The Product of all odd elements is %d",iRet);
	
	return 0;
}

