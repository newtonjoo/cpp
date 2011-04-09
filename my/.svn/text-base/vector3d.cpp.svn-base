#include <math.h>
#include <stdio.h>
#include "vector3d.h"

void vector3d::out() {
 printf("Vector3D(%f, %f, %f)\n", x,y,z);
}

double vector3d::length() {
 return sqrt(x*x + y*y + z*z);
}

double vector3d::dotproduct(vector3d vec) {
 return (x*vec.x+y*vec.y+z*vec.z);
}

vector3d vector3d::crossproduct(vector3d v) {
 return vector3d(y*v.z-z*v.y, z*v.x-x*v.z, x*v.y-y*v.x);
}

void vector3d::translation(double a, double b, double c) {
 x = x+a;
 y = y+b;
 z = z+c;
}

void vector3d::rotation(double alpha, double beta, double gamma) {
 x=x;
}
