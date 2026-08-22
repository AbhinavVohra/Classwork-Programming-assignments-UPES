//Write a progrsm to classify a character as lowercase,uppercase,digit or special character based on the input

#include <stdio.h>
int main () {
  char c;                       //The character entered is a char data type which can be verified for digit,alphabet or special character
  printf("Enter the character :");
  scanf("%c",&c);

  if (c >= 'A' && c <= 'Z') {
        printf("The character is uppercase");
  }
  else if (c >= 'a' && c <= 'z') {
        printf("The character is lowercase");
  }
  else if (c >= 1 && c <= 9) {
        printf("The character is a digit");
  }
  else {                             //If the character does not come under any of the types given above, it will be declared a special character
        printf("The character is a special character");
  }
  return 0;
}
