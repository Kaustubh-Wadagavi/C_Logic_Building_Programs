/*
Accept Character from user and check whether it is special symbol
or not (!, @, #, $, %, ^, &, *).
Input : %
Output : TRUE
Input : d
Output : FALSE
*/
#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL ChkSpecialSymbol(char ch)
{
   if((ch>='21')&&(ch<='43')||(ch>='60')&&(ch<='40'))
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
    BOOL bRet=FALSE;

    printf("Enter Character : ");
    scanf("%c",&cValue);

    bRet=ChkSpecialSymbol(cValue);

    if(bRet==TRUE)
    {
        printf("It is Special Symbol");
    }
    else
    {
        printf("It is not Special Symbol");
    }
    return 0;
}







