/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
int a;
printf("enter the value:");
scanf("%d",&a);
if(a>=0)
printf("%d is positive",a);
else{
    printf("%d is negative",a);
    
}
return 0;
}
