//8. Program to convert a positive number into a negative number and negative number into a positive number using a switch statement.

#include<stdio.h>
int main()
{
    int n,num=0;
    printf("Enter any number: ");
    scanf("%d",&n);
    switch(n>0)
        {
            case 1: num=0-n;
                    break;
            case 0: num=0-n;
                    break;
        }
    printf("Number after conversion is %d",num);
    return 0;
}
