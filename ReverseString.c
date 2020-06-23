/*
  Write a program which accept string from user and display it inn
reverse order.
Input : “MarvellouS”
Output : “SuollevraM”
*/
#include<stdio.h>
#include<malloc.h>


void DisplayReverse(char *str,int iLength)
{
    int i=0;
    for(i=iLength-1;i>=0;i--)
    {
        printf("%c",str[i]);
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
    DisplayReverse(STR,iSize);



    return 0;
}
