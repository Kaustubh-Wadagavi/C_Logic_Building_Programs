/*
Accept character from user. If it is capital then display all the
characters from the input characters till Z. If input character is small
then print all the characters in reverse order till a. In other cases
return directly.
Input : Q
Output : Q R S T U V W X Y Z
Input : m
Output : m l k j i h g f e d c b a
*/
#include<stdio.h>
void DisplayChar(char ch)
{
   if((ch>='A')&&(ch<='Z'))
   {
       for(ch  ;ch<='Z';ch++)
       {
           printf("%c\t",ch);
       }
   }
   else if((ch>='a')&&(ch<='z'))
   {
       for(ch  ;ch>='a';ch--)
       {
           printf("%c\t",ch);
       }
   }
}
int main()
{
    char cValue='\0';

    printf("Enter Character : ");
    scanf("%c",&cValue);

    DisplayChar(cValue);

    return 0;
}







