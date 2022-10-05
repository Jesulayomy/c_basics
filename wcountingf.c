#include <stdio.h>

/* Counts character in the input; v2 */
main () {
 double nc;
 
 for (nc =0; getchar() != EOF; ++nc);
 
 printf("\n There are %.0f characters \n", nc);

}
