#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include "exprcalc.h"

#include <iostream>

template<typename T> using varmap = std::map<std::string, T>;

int main() {


  exprcalc::exprcalc_t calc("1+41");

  auto compile_result = calc.compile();
  
  if (compile_result.result != exprcalc::exprcalc_t::compile_result_t::ok) {
    std::cout << "Parse error\n";
    return 1;
  }

  calc.bind(varmap<exprcalc::number_t>());

  std::cout << calc.eval() << std::endl;
  
  return 0;
}
