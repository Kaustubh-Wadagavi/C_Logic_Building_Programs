/*
 Write a program which accept string from user and convert it into
upper case.
Input : “Marvellous Multi OS”
Output : MARVELLOUS MULTI OS
*/
#include<stdio.h>
#include<malloc.h>


void CapitalCase(char *str,int iLength)
{
    int i=0;
    for(i=0;i<iLength;i++)
    {
        if((str[i]>='a')&&(str[i]<'z'))
        {
            printf("%c",str[i]-32);
        }
        else
        {
            printf("%c",str[i]);
        }
    }

}
int main()
{
    int iSize=0,i=0,j=0;
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
    CapitalCase(STR,iSize);



    return 0;
}
