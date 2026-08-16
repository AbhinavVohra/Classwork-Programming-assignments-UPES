//Size of operators and sizes of Data types

#include <stdio.h>
int main() {            //%zu format specifier is used to store the value of the size of data type received by the sizeof() function
  printf("char : %zu byte\n",sizeof(char));    //The size of char data type will be printed
  printf("int : %zu bytes\n",sizeof(int));     //The size of int data type will be printed
  printf("float : %zu bytes\n",sizeof(float));     //The size of float data type will be printed
  printf("double : %zu bytes\n",sizeof(double));     //The size of double data type will be printed

  return 0;
}
