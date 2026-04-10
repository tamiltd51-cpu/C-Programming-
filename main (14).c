/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main() {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                printf("%d is a Leap Year.\n", year);
            } 
            else {
                printf("%d is not a Leap Year.\n", year);
            }
        } 
        else {
            printf("%d is a Leap Year.\n", year);
        }
    } 
    else {
        printf("%d is not a Leap Year.\n", year);
    }

    return 0;
}
