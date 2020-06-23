/*Accept Character from user and check whether it is capital or not
(A-Z).
Input : F
Output : TRUE
Input : d
Output : FALSE
*/
#include<stdio.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkCapital(char ch)
{
    if((ch>='A')&&(ch<='Z'))
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

     bRet=ChkCapital(cValue);

     if(bRet==TRUE)
     {
         printf("It is Capital Character");
     }
     else
     {
         printf("It is not Capital Character");
     }
     return 0;
}





