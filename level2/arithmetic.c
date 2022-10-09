#include<stdio.h>

main () {

//Initializing constants
 int a, b, c, d, e, f, g;
 a = 15;
 b = 17;
 c = 32;
 d = 73;
 e = 86;
 f = 57;
 g = 78;

// Declaring variables
 int summatio;
 int modul;
 summatio = a + b;
 int subtrac = f - c;
 int produc = e * d;
 int squar = c * c;
 int divisio = g / e;
 modul = g % f;

// Results
 printf("a=%d b=%d c=%d d=%d e=%d f=%d g=%d \n", a, b, c, d, e, f, g);
 printf("The sum of a and b is: %d \n", summatio);
 printf("The difference between f and c is: %d \n", subtrac);
 printf("The product of d and e is: %d \n", produc);
 printf("The result of g/e is: %d \n",divisio);
 printf("The square of c is: %d \n", squar);
 printf("The remainder when g is divided by f is: %d \n",modul);
 
// More operations
 float n1;
 float n2;

 printf("For the next part, input a two digit number (xy)- ");
 n1 = getchar();
 n2 = getchar();
 printf("You have entered %f + %f. \n", n1, n2);
 printf("Few possibilities are: \nx + y = %f \n", n1 + n2);
 printf("x - y = %f \n", n1 - n2 );
 printf("x / y = %f \n", n1 / n2 );
 printf("x * y = %f \n", n1 * n2 );
 n1 += n2;
 printf(" n1 += n2 gives; %f \n", n1);

/*
//Lets try wotking with getc and int
 int h = 12;
 int j;
 printf("\n Insert a number:... ");
 j = getc(stdin);
 printf("You inserted %d \n", j);
*/

 return 0;
}
