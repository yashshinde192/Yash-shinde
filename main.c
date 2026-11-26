/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>
int main()
{
 char name[50];
 int age;
 printf("Enter your name: ");
 scanf("%49s",&name);
 printf("Enter your age: ");
 scanf("%d", &age);
 printf("\nWelcome %s!\n", name);
 printf("Your age is %d years.\n", age);
 return 0;
}