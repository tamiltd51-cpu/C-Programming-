/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int main()
{
    int a = 10, b = 4, arithmetic;

      arithmetic = a + b;
    printf("a + b is %d\n", arithmetic);
    arithmetic = a - b;
    printf("a - b is %d\n", arithmetic);
    arithmetic = a * b;
    printf("a * b is %d\n", arithmetic);
   arithmetic = a / b;
    printf("a / b is %d\n", arithmetic);
   arithmetic = a % b;
    printf("a %% b is %d\n", arithmetic);
    return 0;
}
