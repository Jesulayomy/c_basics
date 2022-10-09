#include <stdio.h>
// Testing out integres and floats in divisions.

main() {
 
 int int1, int2;
 float flt1, flt2;

 int1 = 22 / 7;
 int2 = 15 / 3;

 flt1 = 22 / 7;
 flt2 = 15e3 / 3e2;

 printf("The integer division of 22/7 is: %d , \nAnd the floating-point's is %f \n", int1, flt1);
 printf("The floating point division of 15/3 is: %f, \nAnd it's integer division is %d \n", flt2, int2);

}
