// Keywords and Header files

#include <stdio.h>
#include <math.h>        // math Header file is included whenever we have to use math related functions like sqrt(),pow() etc

int main() {
  const float PI = 3.14159;   //const keyword is used to declare a variable constant meaning its value cannot be changed throughout the program
  typedef unsigned int uint;   /* typedef keyword creates an alias for an already existing data type like we made uint for int
                                whereas unsigned int is used to represent that there can be only non-negative integer values for this int variable */

  uint r = 5;            //uint is an allias for int created by us
  float area = PI * r * r;

  printf("Area : %.2f\n",area);   
  printf("Sqrt : %.1f\n",sqrt(49.0));   // sqrt() is a function that belongs in the math Header file
  printf("Power : %.0f\n",pow(2,5));      //pow() is a function that belongs in the math Header file
  return 0;
}
  
