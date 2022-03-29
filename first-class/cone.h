#ifndef CONE_H
#define CONE_H

#include "constants.h"

class Cone {
 private:
  double radius = 0.0;
  double height = 0.0;

 public:
  Cone() = default;
  Cone(double r, double h);
  double volume();
  double getRadius() { return radius; }
  void setRadius(double r) { radius = r; }
  double getHeight() { return height; }
  void setHeight(double h) { height = h; }
};
#endif