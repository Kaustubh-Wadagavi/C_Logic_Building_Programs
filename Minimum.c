/*
   2. Accept N numbers from user and return the smallest number.
Input : N : 6
 Elements : 85 66 3 66 93 88
Output : 3 
*/
#include<stdio.h>
#include<malloc.h>


int Minimum(int Arr[],int iLength)
{
	int i=0,iMin=0;
	if((Arr==NULL)||(iLength<0))
	{
		printf("There is no inserted Values");
		return -1;
	}
	iMin=Arr[0];
	for(i=0;i<iLength;i++)
	{
		if((Arr[i]<iMin))
		{
			iMin=Arr[i];
		}
	}
	return iMin;
	
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
	iRet=Minimum(p,iSize);
	printf("\n The Minimum Number of All Given Number is %d",iRet);
	
	return 0;
}

