/*
  Write a program which accept string from user and count number of
white spaces
Input : “MarvellouS”
Output : 0
Input : “MarvellouS Infosystems”
Output : 1
Input : “MarvellouS Infosystems by Piyush Manohar Khairnnar”
Output : 5
*/
#include<stdio.h>
#include<malloc.h>


int WhiteSpaces(char *str,int iLength)
{
    int i=0,iCnt=0;
    for(i=0;i<iLength;i++)
    {
        if((str[i]=='\t'))
        {
            iCnt++;
        }
    }

}
int main()
{
    int iSize=0,i=0,j=0,iRet=0;
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
    printf("\n");
    iRet=WhiteSpaces(STR,iSize);

    printf("Count of white spaces in your String is : %d",iRet);

    return 0;
}
