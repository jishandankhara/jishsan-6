// 6.3 Q1 write a program to print the sum of all numbers from 1 to N using while loop.
#include<stdio.h>
#include<conio.h>
void main(){
int j,s,d=0;
clrscr();
printf("enter a number:");
scanf("%d",&j);
for(s=1;s<=j;s++)
   {d = d+s;                                 }
printf("the sum of digits betweenv 1 and %d is: %d",j,d);
getch();
/* enter a number: 12;
the sum  of digits betweenv 1 and 12 is:78   */}