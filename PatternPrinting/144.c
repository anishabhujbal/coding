//Pattern A-35
/*

    1       2       3       4       5
    1       2                       5
    1               3               5
    1                       4       5
    1       2       3       4       5
       
*/
#include<stdio.h>
void Pattern(int iRow, int iCol)
{
    int i=0,j=0;
    int iNo=0;
    for(i=1;i<=iRow;i++)
    {
        for(j=1;j<=iCol;j++)
        {   
            if(i==j || i==1 || j==1 || j==iCol || i==iRow)
            {
                printf("%d\t",j);
            }
            else
            {
                printf(" \t");
            }
        }
        printf("\n");
    }
   
}
int main()
{
    int iValue1=0;
    int iValue2=0;

    printf("Enter Row: ");
    scanf("%d",&iValue1);

    printf("Enter Column: ");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);
    return 0;
}