
#include<stdio.h>

void NumberLine(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(int i = (-iNo); i <= iNo; i++)
    {
        printf("%d ",i);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    NumberLine(iValue); 

    return 0;
}