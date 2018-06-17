#ifndef LINKED_LIST
#define LINKED_LIST

#include <stdbool.h>
#include "planet.h"

typedef struct linked_list_type {
	Planet *planet;
	struct linked_list_type *next;
} LinkedList;

LinkedList *addList(LinkedList *list, Planet *planet);

void freeList(LinkedList *list);

#endif