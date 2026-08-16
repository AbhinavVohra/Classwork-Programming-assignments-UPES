//Using Relational Operators in C

#include <stdio.h>
int main() {
  int x,y;        //Taking non decimal numbers
  printf("Enter the first number:");
  scanf("%d",&x);

  printf("Enter the second number:");
  scanf("%d",&y);
      //Relational Operators Relate two or more variables with each other,They return True or False in 0 and 1(BINARY) format based upon the statements
  printf("x == y : %d\n", x == y );        //TRUE=1,FALSE=0
  printf("x != y : %d\n", x != y );         //TRUE=1,FALSE=0
  printf("x > y : %d\n", x > y );           //TRUE=1,FALSE=0
  printf("x < y : %d\n", x < y );           //TRUE=1,FALSE=0
  printf("x <= 10 : %d\n", x <=10);          //TRUE=1,FALSE=0

  return 0;
}
