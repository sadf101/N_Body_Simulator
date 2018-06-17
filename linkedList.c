#include "linkedList.h"
#include <stdlib.h>

LinkedList *addList(LinkedList *list, Planet *planet) {
	LinkedList *new = malloc(sizeof(LinkedList));
	new->planet = planet;
	new->next = list;
}

void freeList(LinkedList *list) {
	while (list != NULL) {
		LinkedList *temp = list;
		free(list->planet);
		list = list->next;
		free(temp);
	}
}