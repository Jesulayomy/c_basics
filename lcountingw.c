#include <stdio.h>

/* Need to correct for counting text and line */
main () {
/* Counts the lines in the output */
 int c, nl, w;
 nl =1;
 w=0;
 while ((c = getchar()) != EOF);
   while (c != EOF)
	++w;
	if (c =='\n' )
		++nl;
 printf("\nThere are %d lines and %d characters in your text\n", nl, w);

}
