/* Write a program which displays ASCII table. Table contains symbol,
Decimal, Hexadecimal and Octal representation of every member from
0 to 255.
*/
#include<stdio.h>
void DisplayASCII()
{
    int i=0;
    for(i=0;i<255;i++)
    {
        printf("%d\t-> %c\t",i,i);
        printf("\n");
    }

}
int main()
{
	DisplayASCII();

	return 0;
}







