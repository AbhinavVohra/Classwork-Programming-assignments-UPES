//Write a program to take the length and perimeter of a rectangle as input and find the breadth and area 

#include <stdio.h>
int main() {
  float length,perimeter;      //These all values can be either with or without decimal
  float breadth,area;

  printf("Enter the length of the rectangle:");
  scanf("%f",&length);

  printf("Enter the perimeter of the rectangle:");
  scanf("%f",&perimeter);

  breadth = (perimeter - (2 * length))/2;        //Perimeter=2l+2b so perimeter - 2*l divided by 2 will give us breadth
  area = length * breadth;                    //Area of rectangle = l*b

  printf("The Length of the rectangle is: %.2f\n",length);
  printf("The Breadth of the rectangle is: %.2f\n",breadth);
  printf("The Perimeter of the rectangle is: %.2f\n",perimeter); 
  printf("The Area of the rectangle is: %.2f\n",area);

  return 0;
}
  
