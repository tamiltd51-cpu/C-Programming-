/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
       int p,l,w;
       printf("enter the length of rectangle");
       scanf("%d",&l);
       printf("enter the width of rectangle");
       scanf("%d",&w);
       p = 2*(l+w);
       printf("\n p =%d\n",p);
    return 0;
}
