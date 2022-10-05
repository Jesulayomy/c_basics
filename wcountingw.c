#include <stdio.h>

/* Counts character in the input; v1 */
main () {
 long nc;
 nc = 0;
 while (getchar() != EOF)
  ++nc;
 printf("There are %ld characters \n", nc);

}
