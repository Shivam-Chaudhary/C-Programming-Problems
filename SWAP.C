//swapping two numbers
#include<stdio.h>
#include<conio.h>
void main(){
int a,b,temp;
clrscr();
printf("Enter the two variables a and b\n");
scanf("%d%d",&a,&b);
printf("You entered a=%d b=%d\n",a,b);

a=a+b;
b=a-b;
a=a-b;
printf("Numbers after swapping a=%d b=%d",a,b);
getch();
}
