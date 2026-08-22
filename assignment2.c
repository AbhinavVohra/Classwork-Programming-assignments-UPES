//Write a program to print"Excellent","Nice efforts" and "Need to work harder" when the grade entered by the user is 'A','B' and 'C' respectively

#include <stdio.h>
int main() {
  char grade;           //Grade is always a character

  printf("Enter the grade : ");                
  scanf("%c",&grade);

  switch (grade) {
      case 'A':                      //These cases will work for both 'A' and 'a'
      case 'a':
            printf("Excellent!!");
            break;                        //break statement will exit out of the switch function without checking the rest of the cases

      case 'B':                          //These cases will work for both 'B' and 'b'
      case 'b':
            printf("Nice Efforts");
            break;                                //break statement will exit out of the switch function without checking the rest of the cases


      case 'C':
      case 'c':
            printf("Need to work harder");
            break;                                 //break statement will exit out of the switch function without checking the rest of the cases


      default:
            printf("Invalid Grade");               //default section is for any case which is not from the above
  }
  return 0;
}
