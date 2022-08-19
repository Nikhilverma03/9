//6. Program to check whether a year is a leap year or not. Using switch statement

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int year,result;
    printf("Enter year: ");
    scanf("%d",&year);
    result=((year%400==0)||(year%4==0)&&(year%100!=0));
    switch(result)
    {
    case 1:
        printf("%d is a leap year\n",year);
        break;
    case 0:
        printf("%d is not a leap year\n",year);
        break;
    }
    return 0;
}

