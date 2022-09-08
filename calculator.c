#include <stdio.h>
int main(void)
{
    //define the variables.
    float value1, value2;
    char op;
    //take the values from the user.
    printf("Enter the first value: ");
    scanf("%f", &value1);    
    printf("\nEnter the operator: ");
    scanf(" %c", &op);
    printf("\n Enter the second value: ");
    scanf("%f", &value2);
    //calculation
    if( op == '+')
        printf("\n The resault is: %f", value1 + value2);
    else if ( op == '-')
        printf("\n The resault is: %.2f", value1 - value2);
    else if ( op == '*')
        printf("\n The resault is: %.2f", value1 * value2);
    else if ( op == '/')
        printf("\n The resault is: %.2f", value1 / value2);
    else if ( op == '%')
        printf("\n The resault is: %i", (int)value1 % (int)value2);
    else printf("\n Something goes wrong!!\n Try again.");
}