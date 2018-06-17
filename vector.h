#ifndef VECTOR
#define VECTOR

typedef struct vector_type {
	double x;
	double y;
	double z;
} Vector;

void reset(Vector *vector);

Vector add(Vector *a, Vector *b);

Vector minus(Vector *a, Vector *b);

Vector times(Vector *a, double t);

Vector divide(Vector *a, double t);

double magnitude(Vector *vector);

Vector unitVector(Vector *vector);

Vector calcDisplacement(Vector *a, Vector *b);

void copy(Vector *a, Vector *b);

#endif