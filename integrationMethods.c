#include "integrationMethods.h"
#include "linkedList.h"

bool verlet(Space *space, unsigned long steps, double step) {
	LinkedList *current = space->planets;
	while (current != NULL) {
		calcPrevR(current->planet, step);
		current = current->next;
	}
	unsigned long progress = 0;
	while (progress < steps) {
		current = space->planets;
		while (current != NULL) {
			calcA(current->planet, space);
			current = current->next;
		}
		current = space->planets;
		while (current != NULL) {
			move(current->planet, step);
		}
		progress++;
	}
}