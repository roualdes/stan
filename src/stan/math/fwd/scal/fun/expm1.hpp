#ifndef STAN_MATH_FWD_SCAL_FUN_EXPM1_HPP
#define STAN_MATH_FWD_SCAL_FUN_EXPM1_HPP

#include <stan/math/fwd/core.hpp>
#include <cmath>

namespace stan {
  namespace math {

    template <typename T>
    inline fvar<T> expm1(const fvar<T>& x) {
      using std::exp;
      using ::expm1;
      return fvar<T>(expm1(x.val_), x.d_ * exp(x.val_));
    }

  }
}
#endif
