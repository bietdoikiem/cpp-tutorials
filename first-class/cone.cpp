#include "cone.h"

Cone::Cone(double r, double h) {
  radius = r;
  height = h;
}

double Cone::volume() { return 1.0 / 3.0 * PI * radius * radius * height; }