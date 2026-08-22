//Write a program to swap two numbers using a third variable

#include <stdio.h>
int main() {
  int a,b,var;         //Defining a variable named var to swap a and b

  printf("Enter the first number:");
  scanf("%d",&a);

  printf("Enter the second number:");
  scanf("%d",&b);

  printf("Values of both numbers before swapping : %d  %d\n",a,b);      //Printing the original values of both the variables before swapping

  var=a;    //var now has the value of a
  a=b;      //a now has the value of b
  b=var;     //b now has the Original value of a

  printf("Values of both numbers after swapping : %d  %d\n",a,b);    //Printing the values of both the variables after swapping them through var

  return 0;
}


  
