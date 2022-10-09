#include<stdio.h>
//outputs using putc()
main () {
 int ch;
 ch = 65;
 printf("The character that has a numeric value of 65 is: ");
 putc(ch, stdout);
 printf("\n");
//a word with you mr?
 putchar(65);
  putchar(84);
 putchar(69); 
// oh and btw, the numeric for \n is 10
 putchar(10);
 return 0;

}
