// write a program to swap 2 numbers
#include<stdio.h>
int main()
{
 int num1,num2,temp;
 printf("Enter value of A & B:");
 scanf("%d %d",&num1,&num2);
 temp=num1;
 num1=num2;
 num2=temp;
 printf("Value After Swapping: A = %d\n B= %d\n",num1,num2);
 return 0;
}
 
 
