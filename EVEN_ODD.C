//find number is even or odd without using % operator

#include<stdio.h>
#include<conio.h>
void main()
{
int x;
clrscr();
printf("Enter the number please\n");
scanf("%d",&x);
if(x&1)   // AND operation on Number with 1
printf("Number is Odd");
else
printf("Number is Even");
getch();
}