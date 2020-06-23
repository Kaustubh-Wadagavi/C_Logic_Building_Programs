/*
 Write a program which accept string from user and return
difference between frequency of small characters and frequency of
capital characters.
Input : “MarvellouS”
Output : 6 (8-2)
*/
#include<stdio.h>
#include<malloc.h>

int DifferenceCapSmall(char *str,int iLength)
{
    int i=0,iCnt1=0,iCnt2=0;
    for(i=0;i<iLength;i++)
    {
        if((str[i]>='a')&&(str[i]<='z'))
        {
            iCnt1++;
        }
        else
        {
            iCnt2++;
        }
    }
    return iCnt1-iCnt2;
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

    iRet=DifferenceCapSmall(STR,iSize);
    printf("\n");
    printf("The Difference between Capital and Small Characters Count in your String is %d",iRet);

    return 0;
}
