#ifndef SPACE
#define SPACE

#include "planet.h"
#include "vector.h"
#include "space.h"
#include "linkedList.h"

typedef struct space_type {
	LinkedList *planets;
	unsigned int planetCount;
} Space;

Space *createSpace();

void addPlanet(Space *space, char *name, double mass, Vector r, Vector v, Vector a);

bool removePlanet(Space *space, char *name);

#endif