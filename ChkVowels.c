/*
  Write a program which accept string from user and check whether
it contains vowels in it or not.
Input : “marvellous”
Output : TRUE
Input : “Demo”
Output : TRUE
*/
#include<stdio.h>
#include<malloc.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkVowels(char *str,int iLength)
{
    int i=0;
    for(i=0;i<iLength;i++)
    {
        if((str[i]=='a')||(str[i]=='e')||(str[i]=='i')||(str[i]=='o')||(str[i]=='u'))
        {
            break;
        }
    }
    if(i==iLength)
    {
        return FALSE;
    }
    else
    {
        return TRUE;
    }
}
int main()
{
    int iSize=0,i=0,j=0;
    char *STR=NULL;
    BOOL bRet=FALSE;

    printf("Enter size of string : ");
    scanf("%d",&iSize);

    STR=((char*)malloc(sizeof(char)));

    if(STR==NULL)
    {
        printf("Unable to allocate Memory");
        return -1;
    }

    printf("Enter the Characters : ");
    for(i=0;i<iSize;i++)
    {
        scanf("%s",&STR[i]);
    }
    printf("\n");
    printf("Your String is : ");
    for(j=0;j<iSize;j++)
    {
        printf("%c",STR[j]);
    }

    bRet=ChkVowels(STR,iSize);
    printf("\n");
    if(bRet==TRUE)
    {
        printf("The String Contains Vowels");
    }
    else
    {
        printf("The string Doesn't Contains Vowels");
    }

    return 0;
}
