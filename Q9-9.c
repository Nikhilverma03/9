//9. Program to Convert even number into its upper nearest odd number Switch Statement.

#include<stdio.h>
int main()
{
    int n,newno;
    printf("Enter any even number: ");
    scanf("%d",&n);
    switch(n%2==0)
    {
        case 1: newno=n+1;
                printf("Nearest odd number is %d",newno);
                break;
        case 0: printf("Entered number is already %d odd number",n);
                break;
    }
    return 0;
}
