/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

##include <stdio.h>

int main()
{
int a;
printf("enter the age:");
scanf("%d",&a);
if(a>=18)
printf("%d is eligible to vote",a);
else{
    printf("%d is not eligible to vote",a);
    
}
return 0;
}

