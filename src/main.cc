#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include "gplot.h"
#include <iostream>
#include <cmath>

float f(float x) {
  return sin(cos(x)+cos(2*x)+cos(3*x));
}

int main() {
  sb::gplot::plot2d<float> plot2d(f);
  return 0;
}
