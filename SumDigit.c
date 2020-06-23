/*
 Accept N numbers from user and display summation of digits of each
number.
Input : N : 6
 Elements : 8225 665 3 76 953 858
Output : 17 17 3 13 17 21
*/
#include<stdio.h>
#include<malloc.h>

void SumDigits(int Arr[],int iLength)
{
	int i=0,iNo=0,iSum=0,iDigit=0;
	if((Arr==NULL)||(iLength<0))
	{
		printf("There is no inserted Values");
		return ;
	}
	for(i=0;i<iLength;i++)
	{
		iSum=0;
		iNo=Arr[i];
		while(iNo!=0)
		{
		    iDigit=iNo%10;
			iSum=iSum+iDigit;
			iNo=iNo/10;
		}
		printf("%d\t",iSum);
    }
}
int main()
{
	int iSize=0,i=0,j=0;

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
	SumDigits(p,iSize);

	return 0;
}

