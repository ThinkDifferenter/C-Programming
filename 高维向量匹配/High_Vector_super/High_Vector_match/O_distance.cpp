#include "Head.h"

double O_distance(float * arr1, float * arr2)
{
	double Od = 0.0;
	int i = 0;

	for (i = 1; i < 1025; i++)
	{
		Od += pow((arr1[i] - arr2[i]), 2);
	}

	Od = sqrt(Od);
	return Od;
}