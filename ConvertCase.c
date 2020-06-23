/*
Accept character from user. If character is small display its
corresponding capital character, and if it small then display its
corresponding capital. In other cases display as it is.
Input : Q
Output : q
Input : m
Output : M
Input : 4
Output : 4

Input : %
Output : %
*/
#include<stdio.h>
void ConvertCase(char ch)
{
    if((ch>='A')&&(ch<='Z'))
    {
        printf("Converted Character is : %c\t",ch+32);
    }
    else
    {
        printf("Converted Character is : %c\t",ch-32);
    }
}
int main()
{
    char cValue='\0';

    printf("Enter Character : ");
    scanf("%c",&cValue);

    ConvertCase(cValue);

    return 0;
}







