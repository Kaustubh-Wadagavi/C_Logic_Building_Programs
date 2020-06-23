/*
Write a program which accept string from user and copy the
contents of that string into another string. (Implement strncpy()
function)
Input : “Marvellous Multi OS”
 10
Output : “Marvellous
*/
#include<stdio.h>

void* strNcpyX(char *src,char *dest,int iCnt)
{
	while((*src!='\0')&&(iCnt!=0))
	{
		*src=*dest;
		src++;
		dest++;
		iCnt--;
	}
	*dest='\0';
	return dest; 
}
int main()
{
	char arr[30]="Kaustubh Wadagavi";
	char brr[30];

	strNcpyX(arr,brr,10);
	printf("Copied data in another string is : %s",brr);
	return 0;
}