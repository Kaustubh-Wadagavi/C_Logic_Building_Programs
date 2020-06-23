/*Accept Character from user and check whether it is small case or
not (a-z).
Input : g
Output : TRUE
Input : D
Output : FALSE
*/
#include<stdio.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkSmallCase(char ch)
{
    if((ch>='a')&&(ch<='z'))
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

     bRet=ChkSmallCase(cValue);

     if(bRet==TRUE)
     {
         printf("It is Small Case Character");
     }
     else
     {
         printf("It is not Small Case Character");
     }
     return 0;
}





