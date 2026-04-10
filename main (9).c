/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
int a,b,year,month,days,weeks,rem_days;
printf("enter the days:");
scanf("%d",days);
year=days/365;
days=days%365;
month=days/30;
days=days%30;
weeks=days/7;
rem_days=days%7;
printf("%d days is equal to %d year, %d month, %d weeks, and %d days.\n", 
     days, year, month, weeks, rem_days);

return 0;
}