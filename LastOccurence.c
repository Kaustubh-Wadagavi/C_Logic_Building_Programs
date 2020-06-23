/*
  Accept N numbers from user and accept one another number as NO ,
return index of last occurrence of that NO.
Input : N : 6
 NO: 66
 Elements : 85 66 3 66 93 88
Output : 3
Input : N : 6
 NO: 93
 Elements : 85 66 3 66 93 88
Output : 4
Input : N : 6
 NO: 12
 Elements : 85 11 3 15 11 111
Output : -1 
*/
#include<stdio.h>
#include<malloc.h>


int LastOccurence(int Arr[],int iLength,int iNo)
{
	int i=0;
	if((Arr==NULL)||(iLength<0))
	{
		printf("There is no inserted Values");
		return -1;
	}

	for(i=iLength;i>=0;i--)
	{
		if((Arr[i]==iNo))
		{
			break;
		}
	}
	if(i==-1)
	{
		return -2;
	}
	else
	{
		return i+1;
	}
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

	printf("Enter the Number that you want to search : ");
	scanf("%d",&iValue);
	
	printf("\n");
	iRet=LastOccurence(p,iSize,iValue);
	printf("Last Occurence of given number is : %d",iRet);
	
	
	return 0;
}

