/*
 Write a program which accept string from user and accept one
character. Check whether that character is present in string or not.
Input : “Marvellous Multi OS”
 e
Output : TRUE
Input : “Marvellous Multi OS”
 W
Output : FALSE
*/
#include<stdio.h>
#include<malloc.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkCharacter(char *str,char Ch,int iLength)
{
    int i=0;
    for(i=0;i<iLength;i++)
    {
        if((str[i]=='ch'))
        {
            break;
        }
    }
    if(i<iLength)
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
    int iSize=0,i=0,j=0;
    char *STR=NULL;
    char c='\0';
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
    printf("Enter Character that you Want to search :");
    scanf("%s",&c);

    printf("\n");

    printf("Your String is : ");
    for(j=0;j<iSize;j++)
    {
        printf("%c",STR[j]);
    }
   

    printf("\n");
    bRet=ChkCharacter(STR,c,iSize);

    if(bRet==TRUE)
    {
        printf("It Contains that Character");
    }
    else
    {
        printf("It doesn't Contains that Character");
    }

    return 0;
}
