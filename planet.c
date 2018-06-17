#include "planet.h"
#include "linkedList.h"
#include "physics.h"

void calcV(Planet *planet, double step) {
	planet->v = divide(minus(planet->r, planet->prevR), step);
}

void calcPrevR(Planet *planet, step) {
	planet->prevR = minus(planet->r, times(planet->v, step));
}

void calcA(Planet *planet, Space *space) {
	reset(&(planet->a));
	LinkedList *current = space->planets;
	while (current != NULL) {
		if (current->planet != planet) {
			planet->a = add(planet->a, aAToB(planet, current->planet));
		}
		current = current->next;
	}

}

void move(Planet *planet, step) {
	Vector temp = malloc(sizeof(Vector));
	copy(planet->r, temp);
	planet->r = times(planet->r, 2);
	planet->r = minus(planet->r, planet->prevR);
	planet->r = add(planet->r, times(planet->a, step * step));
	copy(temp, planet->prevR);
}