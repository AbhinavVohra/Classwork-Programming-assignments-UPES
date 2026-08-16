// Increment and Decrement 

#include <stdio.h>
int main() {
  int a = 5, b = 5;

  printf("Postfix of a : %d\n", a++);    // a++(Postfix) returns the value of a before incrementing(adding by 1)
  printf("Value of a now : %d\n",a);      //Value of a has now been increased by 1 (After Postfix)
  printf("Prefix of b : %d\n",++b);       // ++b(Prefix) returns the value of b after incrementing(adding by 1)
  printf("Value of b now : %d\n",b);     //Value of b has now been increased by 1 
  return 0;
}
  
