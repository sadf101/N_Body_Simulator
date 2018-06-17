#include <stdlib.h>
#include "space.h"
#include <string.h>

LinkedList *planets = NULL;

unsigned int planetCount = 0;

Space *createSpace() {
	Space *space = malloc(sizeof(Space));
	space->planets = NULL;
	space->planetCount = 0;
}

void addPlanet(Space *space, char *name, double mass, Vector r, Vector v, Vector a) {
	Planet planet = malloc(sizeof(planet));
	planet = (Planet) {.name = name, .mass = mass, .r = r, .v = v, .a = a};
	space->planets = addList(space->planets, planet)
	space->planetCount++;
}

bool removePlanet(Space *space, char *name) {
	if (space->planetCount == 0) {
		return false;
	} else if (space->planetCount == 1) {
		if (strcmp(current->planet->name, name)) {
			return false;
		} else {
			freeList(space->planets)
			space->planets = NULL;
			return true;
		}
	} else {
		LinkedList *current = space->planets->next;
		LinkedList *prev = space->planets;
		while (current != NULL) {
			if (strcmp(current->planet->name, name)) {
				prev = prev->next;
				current = current->next;
			} else {
				prev->next = current->next;
				free(current->planet);
				free(current);
				return true;
			}
		}
		return false;
	}
}