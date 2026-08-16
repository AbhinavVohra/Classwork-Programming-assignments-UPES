//Local vs Global scope variables

#include <stdio.h>
int count = 100;     //count is Global Scope variable , it can be accessed anywhere in the program

void show() {          //void declares that the defined function does not return any value
   int count = 5;    //This is a local variable,it has changed the value of global variable count from 100 to 5 but this value only stays inside the show() function
   printf("Local count : %d\n",count);    //This statement will print the local variable count whose value is 5 inside the function
}


int main () {
   show();      //Calling the function show() 
   printf("Global count : %d\n",count);    //This staement will print the value of the global variable count which was declared at the start of the program
   return 0;
}
