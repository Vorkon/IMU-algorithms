#ifndef __VECTOR_H__
#define __VECTOR_H__

//This structure holds the actual x, y, z components of the acceleration read from an IMU
typedef struct direcType {
	double x, y, z;
}

void integrateVector(direcType vector[], direcType newVect[]);
void circVects(direcType vector[]);

const double pi = 4*atan(1);

#endif
