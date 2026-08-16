// Assignment Operators

#include <stdio.h>
int main () {
  int n = 20;
                         //The 5 line below represent the working of Assignment Operators
  n += 5; printf("n += 5 : %d\n",n);         // += adds 5 to 20 resulting in 25
  n -= 3; printf("n -= 3 : %d\n",n);         // -= substracts 3 from 25 resulting in 22
  n *= 2; printf("n *= 2 : %d\n",n);         // *= multiplies 2 to 22 resulting in 44 
  n /= 4; printf("n /= 4 : %d\n",n);         //  /= divides 44 by 4 resulting in 11
  n %= 5; printf("n %= 5 : %d\n",n);         // %= returns the remainder after dividing 11 from 5 resulting in 1

  return 0;
}
