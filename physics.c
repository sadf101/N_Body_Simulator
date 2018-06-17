#include "physics.h"

Vector aAToB(Planet *a, Planet *b) {
	Vector returnVector;
	double coeefficient
	returnVector = calcDisplacement(a->r, b->r);
	double returnMagnitude = magnitude(returnVector);
	coeefficient = G * b->mass / (returnMagnitude * returnMagnitude);
	returnVector = unitVector(returnVector);
	returnVector = times(returnVector, coeefficient);
	return returnVector;
}
