#include<stdio.h>
# include<conio.h>
int main()
{
int age;
clrscr();
printf("Enter age :");
scanf("%d", &age);
if (age >=18)
printf("You can vote!");
else
printf("You cant vote!");
getch();
return 0;
}