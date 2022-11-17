#include <stdio.h>
#include <stdlib.h>

struct car
{
	char *name;
	int year;
	float power;
	float weight;
	long int cost;

} toyoda;

typedef struct car SC;

SC collect_data(SC s);

int main(void)
{
	SC hundah;

	toyoda.name = "Camry";
	toyoda.year = 2008;
	toyoda.power = 1.75;
	toyoda.weight = 6571.5;
	toyoda.cost = 13728000;

	printf("Toyoda's name: %s\n", toyoda.name);
	printf("Toyoda's year: %d\n", toyoda.year);
	printf("Toyoda's power: %fHP\n", toyoda.power);
	printf("Toyoda's weight: %.2fKG\n", toyoda.weight);
	printf("Toyoda's cost: %ld\n", toyoda.cost);

	hundah = collect_data(hundah);

	printf("Hundah's name: %s\n", hundah.name);
	printf("Hundah's year: %d\n", hundah.year);
	printf("Hundah's power: %fHP\n", hundah.power);
	printf("Hundah's weight: %.2fKG\n", hundah.weight);
	printf("Hundah's cost: N%ld\n", hundah.cost);

	return (0);
}

SC collect_data(SC s)
{
	s = SC malloc(sizeof(SC));
	printf("The name of the car\n");
	scanf("%s", s.name);
	printf("The year of make of the car\n");
	scanf("%d", &s.year);
	printf("The power of the car\n");
	scanf("%f", &s.power);
	printf("The weight of the car\n");
	scanf("%f", &s.weight);
	printf("The cost of the car\n");
	scanf("%ld", &s.cost);

	return (s);
}
