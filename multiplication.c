#include<stdio.h>

int multiply ( int x, int y ) {
 int xy;
 xy = x * y;
 return xy;
}

int main () {
 int times;
 times = multiply(5, 3);
 printf("The result is %d. \n", times);
 return 0;
}
