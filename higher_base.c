#include<stdio.h>
//converting to hex to decimal
main () {
 printf("Hex(uppercase)  |Hex(lowercase) |Decimal \n");
 printf("________________|_______________|________\n");
 printf("%X		|%x		|%d\n", 0, 0, 0);
 printf("%X		|%x		|%d\n", 1, 1, 1);
 printf("%X		|%x		|%d\n", 2, 2, 2);
 printf("%X		|%x		|%d\n", 3, 3, 3);
 printf("%X		|%x		|%d\n", 4, 4, 4);
 printf("%X		|%x		|%d\n", 5, 5, 5);
 printf("%X		|%x		|%d\n", 6, 6, 6);
 printf("%X		|%x		|%d\n", 7, 7, 7);
 printf("%X		|%x		|%d\n", 8, 8, 8);
 printf("%X		|%x		|%d\n", 9, 9, 9);
 printf("%X		|%x		|%d\n", 10, 10, 10);
 printf("%X		|%x		|%d\n", 11, 11, 11);
 printf("%X		|%x		|%d\n", 12, 12, 12);
 printf("%X		|%x		|%d\n", 13, 13, 13);
 printf("%X		|%x		|%d\n", 14, 14, 14);
 printf("%X		|%x		|%d\n", 15, 15, 15);

//indentation/ justify
 printf("%3X %-3x \n", 1, 1);
 printf("%3d %-3d \n", 10, 10);
 printf("%3X %-3x \n", 11, 11);
//floating-points
 printf("%3.0f %-2.8f \n", 1.0163, 1.40);
 printf("%3.2f %-3.1f \n", 3.1675, 1.0425);


 return 0;
}
