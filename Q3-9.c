//3. Write a program which takes the day number of a week and displays a unique greeting message for the day.

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    for(;1;)
    {
    printf("\nEnter day number: ");
    scanf("%d",&n);
    switch(n)
    {
    case 1:
        printf("Good Morning, Today is Monday");
        break;
    case 2:
        printf("Good Morning, Today is Tuesday");
        break;
    case 3:
        printf("Good Morning, Today is Wednesday");
        break;
    case 4:
        printf("Good Morning, Today is Thursday");
        break;
    case 5:
        printf("Good Morning, Today is Friday");
        break;
    case 6:
        printf("Good Morning, Today is Saturday");
        break;
    case 7:
        printf("Good Morning,Rest Day,Today is Sundayyyyyy");
        break;
    case 8:
        exit(0);
    default:
        printf("Week have only 7 days and 8th case is there so that we can exit the loop");
    }
    }
    return 0;
}
