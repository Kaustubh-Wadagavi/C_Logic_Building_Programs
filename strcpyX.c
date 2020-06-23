/*Write a program which accept string from user and copy the
contents of that string into another string. (Implement strcpy()
function)
Input : “Marvellous Multi OS”
Output : “Marvellous Multi OS” in another string
*/
#include<stdio.h>

void* strcpyX(char *src,char *dest)
{
	while(*src!='\0')
	{
		*src=*dest;
		src++;
		dest++;
	}
	*dest='\0';
	return dest; 
}
int main()
{
	char arr[30]="Kaustubh Wadagavi";
	char brr[30];

	strcpyX(arr,brr);
	printf("Copied data in another string is : %s",brr);
	return 0;
}