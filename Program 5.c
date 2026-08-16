//Using Logical Operators 

#include <stdio.h>
int main() {
  int a,b;     //Taking non decimal numbers as input

  printf("Enter the first number:");
  scanf("%d",&a);

  printf("Enter the Second number:");
  scanf("%d",&b);
                                                  //Logical Operators return 0 or 1(BINARY) instead of True and False based on the statements
  printf("a AND b greater than 0 : %d\n", (a>0) && (b>0) );         //&& means AND , returns 1 only if both conditions are true else returns 0
  printf("a OR b greater than 0 : %d\n", (a>0) || (b>0) );       //  || means OR , returns 1 if atleast one condition is true , returns false if both statements are false
  printf("a NOT greater than 0 : %d\n", !(a>0) );        // ! means NOT , returns 1 if the the condition inside !() is false else returns 0

  return 0;
}
