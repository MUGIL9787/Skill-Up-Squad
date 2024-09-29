#include<stdio.h>

int main()
{
   int a,b;
   printf("Enter a number a:");
   scanf("%d",&a);
   printf("Enter a number b:");
   scanf("%d",&b);
   a=a*b;
   b=a/b;
   a=a/b;
   printf("The number is\n a=%d \n b=%d",a,b);
   return 0;

}