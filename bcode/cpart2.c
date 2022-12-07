#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

struct player{
    char name[15];
    int socialCredit;
    int age;
};
int main(int argc, char *argv[])
{
    struct player p1, p2;

    strcpy(p1.name, "Layomi");
    p1.socialCredit = 8320;
    p1.age = 22;

    strcpy(p2.name, "Emma");
    p2.socialCredit = 7620;
    p2.age = 24;

    printf("Name => %s\nSocial Credit => %d\nAge => %d\n", p1.name, p1.socialCredit, p1.age);
    printf("Name => %s\nSocial Credit => %d\nAge => %d\n", p2.name, p2.socialCredit, p2.age);

    return (0);
}
