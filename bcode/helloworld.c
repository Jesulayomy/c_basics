#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void sort(int array[], int size)
{
    int i, j, k;

    for(i = 0; i < size - 1; i++)
    {
        for(j = 0; j <  size - 1; j++)
        {
            if(array[j] < array[j + 1])
            {
                k = array[j];
                array[j] = array [j + 1];
                array[j + 1] = k;
            }
        }
    }
}

int main(void)
{
    const float PI = 22 / 7;
    int num1 = 7;
    int num2 = 7;
    float num3;
    char name[25];
    int arr[2][3] = {
                            {1, 2, 3},
                            {4, 5, 6}
                        };
    int array[] = {3, 5, 3, 6, 2, 6, 2, 5, 7, 2, 5, 7, 2, 6, 2, 5, 6, 2, 5, 7, 4, 8};
    int size = sizeof(array) / sizeof(array[0]);

    arr[0][1] = 7;

    /* Increment and decrement */
    printf("%d and %d\n", num1, num2);
    printf("Pre: %d\nPost: %d\n", ++num1, num2++);
    printf("%d and %d\n", num1, num2);

    /* Accept input with whitespaces */
    printf("Enter your name ");
    fgets(name, 25, stdin);
    name[strlen(name) - 1] = '\0';
    printf("You are %s\n", name);

    /* Circumference of a circle */
    printf("Enter the radius of the circle... ");
    scanf("%f", &num3);
    /* tenary operator */
    (num3 > 10) ? putchar('>') : putchar('<');
    printf("\nRadius: %f\nArea: %f\nCircumference: %f\n", num3, PI * num3 * num3, 2 * PI * num3);

    for (num1 = 0; num1 < 2; num1++)
    {
            for(num2 = 0; num2 < 3; num2++)
            {
                printf("Array[%d][%d]: %d\n", num1 ,num2, arr[num1][num2]);
            }
    }

    for(num1 = 0; num1 < size; num1++)
    {
        printf("Array[%d]: %d\n", num1 , array[num1]);
    }

    sort(array, size);
    for(num1 = 0; num1 < size; num1++)
    {
        printf("Array[%d]: %d\n", num1 , array[num1]);
    }

    return (0);
}
