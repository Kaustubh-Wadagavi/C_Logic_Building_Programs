/* Accept character from user and display its ASCII value in decimal,
octal and hexadecimal format.
Input : A
Output : Decimal 65

 Octal 0101
 Hexadecimal 0X41
*/
#include<stdio.h>

void ASCIIDHO()
{
    int i=0;
    for(i=0;i<128;i++)
    {
        printf("%c\t->%d\t",i,i);
        printf("%h\t",i);
        printf("%o\t",i);
    }
}
int main()
{
    ASCIIDHO();
    return 0;
}
