/*7. Program to take the value from the user as input electricity unit charges
and calculate total electricity bill according to the given condition . Using
the switch statement.
For the first 50 units Rs. 0.50/unit
For the next 100 units Rs. 0.75/unit
For the next 100 units Rs. 1.20/unit
For units above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill.*/

#include<stdio.h>
int main()
{
    int unit;
    float amount,total;
    printf("Enter electricity unit charges: ");
    scanf("%d",&unit);
    switch(unit<=50)
    {
        case 1: amount=unit*0.50;
                break;
        case 0: switch(unit<=150)
                {
                case 1: amount=(50*0.50)+((unit-50)*0.75);
                        break;
                case 0: switch(unit<=250)
                        {
                        case 1: amount=(50*0.50)+(100*0.75)+((unit-(50+100))*1.20);
                                break;
                        case 0: amount=(50*0.50)+(100*0.75)+(100*1.20)+((unit-(50+100+100))*1.50);
                                break;
                        }
                }
    }
total=amount+(amount*0.2);
printf("Total electricity bill is %f",total);
return 0;
}
