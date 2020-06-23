/*Accept Character from user and check whether it is digit or not
(0-9).
Input : 7
Output : TRUE
Input : d
Output : FALSE
*/
#include<stdio.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkDigit(char ch)
{
    if((ch>='1')&&(ch<='9'))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()
{
    char cValue='\0';
     BOOL bRet=0;

     printf("Enter Character : ");
     scanf("%s",&cValue);

     bRet=ChkDigit(cValue);

     if(bRet==TRUE)
     {
         printf("It is Digit");
     }
     else
     {
         printf("It is not Digit");
     }
     return 0;
}





