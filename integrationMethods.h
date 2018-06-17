#ifndef INTEGRATION_METHODS
#define INTEGRATION_METHODS

#include <stdbool.h>
#include "space.h"

bool verlet(Space *space, unsigned long steps, double step);

#endif