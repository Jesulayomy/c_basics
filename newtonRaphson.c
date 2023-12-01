#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Four significant figure of tolerance */
#define TOLERANCE 0.0001

/**
 * gof - g(t) which represents the initial equal potential
 * @tn: the current value of tn
 *
 * Return: the value of g(t) at t = tn
 */
double gof(double tn)
{
	double goftn = 100 - (100 * exp(-0.2 * tn)) - (40 * exp(-0.01 * tn));

	return (goftn);
}

/**
 * gprimeof - g'(t) which represents the initial equal potential
 * @tn: the current value of tn
 *
 * Return: the value of g'(t) at t = tn
 */
double gprimeof(double tn)
{
	double gprimeoftn = (200 * exp(-0.2 * tn)) + (0.4 * exp(-0.01 * tn));

	return (gprimeoftn);
}

/**
 * nRaph - Newton Raphson Iteration Function to find the root
 * @tn: the current value of tn, initially set to to (initial guess)
 *
 * Return: The root of the N-R Iteration
 */
double nRaph(double tn)
{
	double h = gof(tn) / gprimeof(tn);
	int steps = 0;

	while (fabs(h) > TOLERANCE)
	{
		printf("Iteration %d", steps);
		h = gof(tn) / gprimeof(tn);

		/* t(n+1) = t(n) - g(n) / g'(n) */
		tn = tn - h;
		printf("\t\tt%d is %lf\t\tdt is %lf\n", steps, tn, h);
		steps += 1;
	}
	printf("\nN-R Iteration converged in %d Iterations\n", steps);

	printf("\nThe value of the root is : %lf\n", tn);
	return (tn);
}

/**
 * main - Newton Raphson Iteration Solution
 *
 * Return: The root of the N-R Iteration
 */
int main(void)
{
	double x0;
	double root;
	double potential;
	double potential2;
	/* int maxsteps; */

	/* printf("The equations are given by V1(t) = 100 -); */
 	printf("== C program for implementation of Newton Raphson Method ==\n");
 	printf("\nThe functions are:\n");
	printf("\tV1(t) = 100(1 - e(-0.2t))\n\tV2(t) = 40e(-0.01t)\n");
 
 	printf("Hence g(t) = V1(t) - V2(t)\n");
	printf("\tg(t) = 100 - 100e(-0.2t) - 40e(-0.01t)\n");
 	printf("\tg'(t) = dg(t)/dt = 20e(-0.2t) + 0.4e(-0.01t)\n\n");
	printf("Enter the Initial guess to - ");
	scanf("%lf", &x0);
	/* printf("\n\nEnter the max number of steps - "); */
	/* scanf("%d", &maxsteps); */

	/* get the root from the Newton Raphson iteration function */
	root = nRaph(x0);

	/* The potential at which the two equations are equal V1 and V2 */
	potential = 40 * exp(-0.01 * root);
	potential2 = 100 * (1 - exp(-0.2 * root));

	printf("\nPotential V1 %.1lf\nPotential V2 %.1lf\n", potential, potential2);

	return (0);
}
