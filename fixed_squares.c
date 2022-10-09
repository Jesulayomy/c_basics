#include<stdio.h>

// source code to adding two fixed numbers in C

int integer_square( int x) {
 int y;
 y = x * x;
 return y;
}

int main() {

 int square;
 square = integer_square( 7 );
 printf( "The square of the number is %d. \n", square );
 return 0;
}

