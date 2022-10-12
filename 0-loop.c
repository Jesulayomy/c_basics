#include<stdio.h>

main () {
 int c = ' ';
 printf("Enter a character\nOr guess the letter that lets you exit\n");
 
 while (c != 'x') {
  c = getc(stdin);
 }
 printf("\nThat one was just obvious huh, lets see you pass the next one\n");
 return 0;
}
