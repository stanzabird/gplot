#ifndef INCLUDED_GPLOT_H
#define INCLUDED_GPLOT_H

#include <string>
#include <map>

namespace sb::gplot {
  template <typename float_t = float>
  struct plot2d { plot2d(float_t (&f)(float_t)) : f(f) {} float_t (&f)(float_t); };
  template <typename float_t = float>
  struct plot3d { plot3d(float_t (&f)(float_t,float_t)) : f(f) {} float_t (&f)(float_t,float_t); };
}

#endif /* INCLUDED_GPLOT_H */

