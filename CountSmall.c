/*
 Write a program which accept string from user and count number of
small characters.
Input : “Marvellous”
Output : 9
*/
#include<stdio.h>
#include<malloc.h>

int CountSmall(char *str,int iLength)
{
    int i=0,iCnt=0;
    for(i=0;i<iLength;i++)
    {
        if((str[i]>='a')&&(str[i]<='z'))
        {
            iCnt++;
        }
    }
    return iCnt;
}
int main()
{
    int iSize=0,iRet=0,i=0,j=0;
    char *STR=NULL;

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

    iRet=CountSmall(STR,iSize);
    printf("\n");
    printf("The Small Characters Count in your String is %d",iRet);

    return 0;
}
