/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main() {
    int a,b,sub;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    sub = a * b;
    printf("sub of %d and %d = %d\n", a,b, sub);

    return 0;
}
