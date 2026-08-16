//Operator Precedence

#include <stdio.h>
int main() {         //The below four statements have random calculations to demonstrate the precedence and the priority of operators from left to right and vice versa
  int r1 = 2 + 3 * 4;     
  int r2 = (2+3) * 4;
  int r3 = 10 - 4 + 2;
  int r4 = 20/4 * 2;

  printf("2 + 3 * 4 = %d\n",r1);      // * will be calculated first as it is of higher priority
  printf("(2 + 3) * 4 = %d\n",r2);    // () will be calculated first as it has higher priority
  printf("10 - 4 + 2 = %d\n",r3);      // - will be calculated first as - and + have same priority but we will follow left to right associativity
  printf("20/4 * 2 = %d\n",r4);       //  / will be calculated first as / and * have same priority but we will follow left to right associativity

  return 0;
}
