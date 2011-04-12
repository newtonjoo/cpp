#ifndef _VECTOR3D_H_
#define _VECTOR3D_H_

#include <iostream>
#include <math.h>
using namespace std;

class vector3d {
private:
  double x, y, z;

public:
  vector3d() : x(0.), y(0.), z(0.) {}
  vector3d(double x_, double y_, double z_) : x(x_), y(y_), z(z_) {}
  vector3d(const vector3d& right) {
    x = right.x;
    y = right.y;
    z = right.z;
  }
  ~vector3d() {}

public:
  double length() const {
    return sqrt(x*x+y*y+z*z);
  }

  double inner(const vector3d& right) const {
    return x * right.x + y * right.y + z * right.z;
  }

  vector3d cross(const vector3d& right) const;
  vector3d unit(void) const;

  double angle(const vector3d& right) const;

  void print(void) const;

  vector3d& operator = (const vector3d& right) {
    x = right.x;
    y = right.y;
    z = right.z;
    return *this;
  }

  vector3d operator + (const vector3d& right) {
    return vector3d(x + right.x, y + right.y, z + right.z);
  }
  vector3d operator - (const vector3d& right) {
    return vector3d(x - right.x, y - right.y, z - right.z);
  }

  friend vector3d operator * (const double amp, const vector3d& right);
  friend ostream& operator << (ostream& os, const vector3d& right);
};
#endif
