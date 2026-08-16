//Declaring variables and data types

#include <stdio.h>

int main () {
  int age=75;     //Age is always an integer value
  float price=56.42;    //Price can be either integer or decimal
  char grade='A';      //Grade will always be a character
  double pi=3.1415926;   //Pi has a fixed decimal value

  printf("Age : %d\n",age);
  printf("Price : %.2f\n",price);
  printf("Grade : %c\n",grade);
  printf("Pi : %.5lf\n",pi);

  return 0;
}
