#include<stdio.h>
// Dor collecting input from user?

main() {

 int ch1;
 int ch2;
 int ch3;
 
 printf("Enter two characters without spaces... ");
 ch1 = getc(stdin);
 ch2 = getchar();
 printf(" \nThe character you entered is: %d as an anscii value\n", ch1);
 printf(" The second one is: %c You did good \n", ch2);
 return 0;


} 


