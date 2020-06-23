/*
 Accept N numbers from user and display all such elements which are
divisible by 5.
Input : N : 6
 Elements : 85 66 3 80 93 88
Output : 85 80 
*/
#include<stdio.h>
#include<malloc.h>
void DivisiblebyFive(int Arr[],int iLength)
{
	int i=0;
	if((Arr==NULL)||(iLength<0))
	{
		printf("There is no inserted Values");
		return ;
	}

	for(i=0;i<iLength;i++)
	{
		if((Arr[i]%5)==0)
		{
			printf("%d\t",Arr[i]);
		}
		
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
	DivisiblebyFive(p,iSize);
	
	return 0;
}

