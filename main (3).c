/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main() {
    int first, second, sum;

    printf("Enter two integers: ");
    scanf("%d %d", &first, &second);
    sum = first + second;
    printf("Sum of %d and %d = %d\n", first, second, sum);

    return 0;
}
