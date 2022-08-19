/*4. Write a menu driven program with the following options:
a. Check whether a given set of three numbers are lengths of an
isosceles triangle or not
b. Check whether a given set of three numbers are lengths of sides of
a right angled triangle or not
c. Check whether a given set of three numbers are equilateral triangle
or not
d. Exit*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int choice,a,b,c;
    printf("1.Isosceles triangle\n2.Right angles triangle\n3.Equilateral triangle\n4.Exit\n");
    for(;1;)
    {
    printf("\nEnter choice: ");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        printf("\nEnter three sides of triangle: ");
        scanf("%d %d %d",&a,&b,&c);
        if(a==b||b==c||c==a)
        {
        printf("%d %d %d are lengths of an isosceles triangle\n",a,b,c);
        }
        else
        printf("%d %d %d are not a lengths of an isosceles triangle\n",a,b,c);
        break;
    case 3:
        printf("\nEnter three sides of triangle: ");
        scanf("%d %d %d",&a,&b,&c);
        if(a==b&&b==c)
        {
        printf("%d %d %d are lengths of an equilateral triangle\n",a,b,c);
        }
        else
        printf("%d %d %d are not a lengths of an equilateral triangle\n",a,b,c);
        break;
    case 2:
        printf("\nEnter three sides of triangle: ");
        scanf("%d %d %d",&a,&b,&c);
        if((a*a)+(b*b)==(c*c)||(b*b)+(c*c)==(a*a)||(c*c)+(a*a)==(b*b))
        {
        printf("%d %d %d are lengths of a right angled triangle\n",a,b,c);
        }
        else
        printf("%d %d %d are not a lengths of a right angled triangle\n",a,b,c);
        break;
    case 4:
        exit(0);
    default:
        printf("\nInvalid choice\n");
    }
    }
    return 0;
}

