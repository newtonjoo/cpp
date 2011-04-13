#include "vector3d.h"

void vector3d::print(void) const {
  cout << "vector3d(" << x << ", " << y << ", " << z << ")" << endl;
}

vector3d operator * (const double amp, const vector3d& right) {
  return vector3d(amp*right.x, amp*right.y, amp*right.z);
}

ostream& operator << (ostream& os, const vector3d& right) {
  os << "vector3d(" << right.x << ", " << right.y << ", " << right.z << ")" << endl;
  return os;
}

vector3d vector3d::cross(const vector3d& right) const{
  return vector3d(y*right.z-z*right.y,
                  z*right.x-x*right.z,
                  x*right.y-y*right.x);
}

vector3d vector3d::unit(void) const {
  double d = sqrt(x*x + y*y + z*z);
  //return vector3d(x/d,y/d,z/d);
  return (1./d) * (*this);
}

double vector3d::angle(const vector3d& right) const {
  return acos(unit().inner(right.unit()));
}

#ifdef _DEBUG
int main(void) {
  vector3d a(1., 2., 3.), b(2., 4., 8.);
  cout << "vector a= " << a << endl;
  cout << "vector b= " << b << endl;


  // To calculate length of 'a' vector
  cout << "length : " << a.length() << endl;

  // To add two vectors
  vector3d c = a + b;
  c.print();

  // inner product
  cout << "inner product <a,b> =" << a.inner(b) << endl;

  // cross product
  vector3d d = a.cross(b);
  cout << "cross product a x b =" ;
  d.print();

  // unit vector
  a.unit().print();
  b.unit().print();

  cout << "angle btw a and b =" << a.angle(b) << endl;

  // To calculate inner product between two vectors
  cout << "value : " << a.inner(b) << endl;

  // Test
  vector3d x(0.,0.,0);
      
}
#endif
