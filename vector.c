#include "vector.h"
#include <math.h>

void reset(Vector *vector) {
	*vector = (Vector) {.x = 0, .y = 0, .z = 0};
}

#define operateVector(op) (Vector) {.x = a->x op b->x, .y = a->y op b->y, .z = a->z op b->z};

Vector add(Vector *a, Vector *b) {
	return operateVector(+);
}

Vector minus(Vector *a, Vector *b) {
	return operateVector(-);
}

#define operateScalar(op) (Vector) {.x = a->x op t, .y = a->y op t, .z = a->z op t}

Vector times(Vector *a, double t) {
	return operateScalar(*);
}

Vector divide(Vector *a, double t) {
	return operateScalar(/);
}

double magnitude(Vector *vector) {
	#define square(a) vector->a * vector->a
	return sqrt(square(x) + square(y) + square(z));
}

Vector unitVector(Vector *vector) {
	return divide(vector, magnitude(vector));
}

Vector calcDisplacement(Vector *a, Vector *b) {
	return minus(b, a);
}

void copy(Vector *a, Vector *b) {
	*a = (Vector) {.x = b->x, .y = b->y, .z = b->z};
}