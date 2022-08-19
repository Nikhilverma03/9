/*2. Write a menu driven program with the following options:
a. Addition
b. Subtraction
c. Multiplication
d. Division
e. Exit*/


#include<stdio.h>
#include<stdlib.h>
int main()
{
    int choice,a,b,c;
    printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Exit\n");
    for(;1;)
    {
    printf("\nEnter choice: ");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        printf("Enter two numbers: ");
        scanf("%d %d",&a,&b);
        c=a+b;
        printf("Sum of %d and %d is= %d",a,b,c);
        break;
    case 2:
        printf("Enter two numbers: ");
        scanf("%d %d",&a,&b);
        c=a-b;
        printf("Difference of %d and %d is= %d",a,b,c);
        break;
    case 3:
        printf("Enter two numbers: ");
        scanf("%d %d",&a,&b);
        c=a*b;
        printf("Product of %d and %d is= %d",a,b,c);
        break;
    case 4:
        printf("Enter two numbers: ");
        scanf("%d %d",&a,&b);
        c=a/b;
        printf("Quotient of %d and %d is= %d",a,b,c);
        break;
    case 5:
        exit(0);
    default:
        printf("Invalid choice");
    }
    }
    return 0;
}
