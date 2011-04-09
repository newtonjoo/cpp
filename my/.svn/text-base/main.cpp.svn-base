#include <iostream>
#include <stdio.h>
#include "vector3d.h"

int main() {
 vector3d t = vector3d(1.0,1.0,1.0);
 vector3d u = vector3d(1.0,1.0,1.0);
 
 double length = t.length();
 double dot = t.dotproduct(u);
 vector3d c = t.crossproduct(u);
 
 t.out();
 u.out();
 c.out();
 printf("Length =%f\n", length);
 t.translation(1.0,1.0,1.0);

 vector3d *w;
 w = new vector3d(2.0,2.0,2.0);
 w->out();
 delete w;

 vector3d pts[3]={vector3d(0.,0.,0.),vector3d(0.,0.,0.),vector3d(0.,0.,0.)};
 for (int i=0; i<3; i++) {
   pts[i].out();
 }
}
