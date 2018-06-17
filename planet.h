#ifndef PLANET
#define PLANET

#include "vector.h"
#include "space.h"

typedef struct planet_type {
	char *name;
	double mass;
	Vector r, v, a, prevR;
} Planet;

void calcV(Planet *planet, double step);

void calcPrevR(Planet *planet, step);

void calcA(Planet *planet, Space *space);

void move(Planet *planet, step);

#endif