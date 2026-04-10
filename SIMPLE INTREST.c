/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main() {
    float principal, rate, time, simple_interest;
    printf("Enter principal amount: ");
    scanf("%f", &principal);
    printf("Enter rate of interest (in percentage): ");
    scanf("%f", &rate);
    printf("Enter time period (in years): ");
    scanf("%f", &time);
    simple_interest = (principal * rate * time) / 100;
    printf("The Simple Interest is: %.2f\n", simple_interest);

    return 0;
}