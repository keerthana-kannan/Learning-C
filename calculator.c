#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b;
    int c;
    char choice;
    do
    {
    printf ("Enter the first number:");
    scanf ("%f",&a);
    printf ("Enter the second number:");
    scanf ("%f",&b);
    printf ("Press 1 for addition; 2 for subtraction; 3 for multiplication; 4 for division; \t");
    scanf ("%d",&c);

    switch(c)
    {
        case 1: printf("The result is %f \n", a+b);
            break;
        case 2: printf("The result is %f \n", a-b);
            break;
        case 3: printf("The result is %f \n", a*b);
            break;
        case 4: printf("The result is %f \n", a/b);
            break;
        default: printf ("Retry");
            break;

    }
    printf("Do you want to exit? Y or N \t");
    scanf ("%s", &choice);
    if (choice == 'y' || choice == 'Y')
    {
        exit(0);
    }

    } while(choice == 'n' || choice == 'N');

    return 0;
}