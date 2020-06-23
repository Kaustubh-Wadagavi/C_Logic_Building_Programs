/*
 Accept N numbers from user and display all such numbers which contains
3 digits in it.
Input : N : 6
 Elements : 8225 665 3 76 953 858
Output : 665 953 858
*/
#include<stdio.h>
#include<malloc.h>

void DisplayConTD(int Arr[],int iLength)
{
	int i=0,iCnt=0,iNo=0;
	if((Arr==NULL)||(iLength<0))
	{
		printf("There is no inserted Values");
		return ;
	}
	for(i=0;i<iLength;i++)
	{
		iNo=Arr[i];
		while(iNo!=0)
		{
			iCnt++;
			iNo=iNo/10;
		}
	}
    if(iCnt==3)
    {
        printf("%d",Arr[i]);
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
	DisplayConTD(p,iSize);

	return 0;
}

