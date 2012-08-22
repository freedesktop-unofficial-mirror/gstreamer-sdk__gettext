/* Test of <math.h> substitute in C++ mode.
   Copyright (C) 2010-2012 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* Written by Bruno Haible <bruno@clisp.org>, 2010.  */

#define GNULIB_NAMESPACE gnulib
#include <config.h>

#include <math.h>

#include "signature.h"

/* Signature check for a function that takes a real-floating argument.
   Check that each overloaded function with the specified signature exists.  */
#define REAL_FLOATING_CHECK(func,\
                            rettype1, parameters1,\
                            rettype2, parameters2,\
                            rettype3, parameters3) \
  OVERLOADED_CHECK (func, rettype1, parameters1, _1); \
  OVERLOADED_CHECK (func, rettype2, parameters2, _2); \
  OVERLOADED_CHECK (func, rettype3, parameters3, _3)
#define OVERLOADED_CHECK(func, rettype, parameters, suffix) \
  static rettype (* _GL_UNUSED signature_check_ ## func ## suffix) parameters \
    = static_cast<rettype(*)parameters>(func)


/* Keep these checks in the same order as math.in.h!  */

#if GNULIB_TEST_ACOSF
SIGNATURE_CHECK (GNULIB_NAMESPACE::acosf, float, (float));
#endif
//SIGNATURE_CHECK (GNULIB_NAMESPACE::acos, double, (double));
#if GNULIB_TEST_ACOSL
SIGNATURE_CHECK (GNULIB_NAMESPACE::acosl, long double, (long double));
#endif

#if GNULIB_TEST_ASINF
SIGNATURE_CHECK (GNULIB_NAMESPACE::asinf, float, (float));
#endif
//SIGNATURE_CHECK (GNULIB_NAMESPACE::asin, double, (double));
#if GNULIB_TEST_ASINL
SIGNATURE_CHECK (GNULIB_NAMESPACE::asinl, long double, (long double));
#endif

#if GNULIB_TEST_ATANF
SIGNATURE_CHECK (GNULIB_NAMESPACE::atanf, float, (float));
#endif
//SIGNATURE_CHECK (GNULIB_NAMESPACE::atan, double, (double));
#if GNULIB_TEST_ATANL
SIGNATURE_CHECK (GNULIB_NAMESPACE::atanl, long double, (long double));
#endif

#if GNULIB_TEST_ATAN2F
SIGNATURE_CHECK (GNULIB_NAMESPACE::atan2f, float, (float, float));
#endif
//SIGNATURE_CHECK (GNULIB_NAMESPACE::atan2, double, (double, double));

//SIGNATURE_CHECK (GNULIB_NAMESPACE::cbrt, double, (double));

#if GNULIB_TEST_CEILF
SIGNATURE_CHECK (GNULIB_NAMESPACE::ceilf, float, (float));
#endif
#if GNULIB_TEST_CEIL
SIGNATURE_CHECK (GNULIB_NAMESPACE::ceil, double, (double));
#endif
#if GNULIB_TEST_CEILL
SIGNATURE_CHECK (GNULIB_NAMESPACE::ceill, long double, (long double));
#endif

#if GNULIB_TEST_COPYSIGNF
SIGNATURE_CHECK (GNULIB_NAMESPACE::copysignf, float, (float, float));
#endif
#if GNULIB_TEST_COPYSIGN
SIGNATURE_CHECK (GNULIB_NAMESPACE::copysign, double, (double, double));
#endif
#if GNULIB_TEST_COPYSIGNL
SIGNATURE_CHECK (GNULIB_NAMESPACE::copysignl, long double,
                 (long double, long double));
#endif

#if GNULIB_TEST_COSF
SIGNATURE_CHECK (GNULIB_NAMESPACE::cosf, float, (float));
#endif
//SIGNATURE_CHECK (GNULIB_NAMESPACE::cos, double, (double));
#if GNULIB_TEST_COSL
SIGNATURE_CHECK (GNULIB_NAMESPACE::cosl, long double, (long double));
#endif

#if GNULIB_TEST_COSHF
SIGNATURE_CHECK (GNULIB_NAMESPACE::coshf, float, (float));
#endif
//SIGNATURE_CHECK (GNULIB_NAMESPACE::cosh, double, (double));

//SIGNATURE_CHECK (GNULIB_NAMESPACE::erf, double, (double));

//SIGNATURE_CHECK (GNULIB_NAMESPACE::erfc, double, (double));

#if GNULIB_TEST_EXPF
SIGNATURE_CHECK (GNULIB_NAMESPACE::expf, float, (float));
#endif
//SIGNATURE_CHECK (GNULIB_NAMESPACE::exp, double, (double));
#if GNULIB_TEST_EXPL
SIGNATURE_CHECK (GNULIB_NAMESPACE::expl, long double, (long double));
#endif

#if GNULIB_TEST_FABSF
SIGNATURE_CHECK (GNULIB_NAMESPACE::fabsf, float, (float));
#endif
//SIGNATURE_CHECK (GNULIB_NAMESPACE::fabs, double, (double));

#if GNULIB_TEST_FLOORF
SIGNATURE_CHECK (GNULIB_NAMESPACE::floorf, float, (float));
#endif
#if GNULIB_TEST_FLOOR
SIGNATURE_CHECK (GNULIB_NAMESPACE::floor, double, (double));
#endif
#if GNULIB_TEST_FLOORL
SIGNATURE_CHECK (GNULIB_NAMESPACE::floorl, long double, (long double));
#endif

#if GNULIB_TEST_FMODF
SIGNATURE_CHECK (GNULIB_NAMESPACE::fmodf, float, (float, float));
#endif
//SIGNATURE_CHECK (GNULIB_NAMESPACE::fmod, double, (double, double));

#if GNULIB_TEST_FREXPF
SIGNATURE_CHECK (GNULIB_NAMESPACE::frexpf, float, (float, int *));
#endif
#if GNULIB_TEST_FREXP
SIGNATURE_CHECK (GNULIB_NAMESPACE::frexp, double, (double, int *));
#endif
#if GNULIB_TEST_FREXPL
SIGNATURE_CHECK (GNULIB_NAMESPACE::frexpl, long double, (long double, int *));
#endif

//SIGNATURE_CHECK (GNULIB_NAMESPACE::hypot, double, (double, double));

//SIGNATURE_CHECK (GNULIB_NAMESPACE::j0, double, (double));

//SIGNATURE_CHECK (GNULIB_NAMESPACE::j1, double, (double));

//SIGNATURE_CHECK (GNULIB_NAMESPACE::jn, double, (int, double));

#if GNULIB_TEST_LDEXPF
SIGNATURE_CHECK (GNULIB_NAMESPACE::ldexpf, float, (float, int));
#endif
//SIGNATURE_CHECK (GNULIB_NAMESPACE::ldexp, double, (double, int));
#if GNULIB_TEST_LDEXPL
SIGNATURE_CHECK (GNULIB_NAMESPACE::ldexpl, long double, (long double, int));
#endif

//SIGNATURE_CHECK (GNULIB_NAMESPACE::lgamma, double, (double));

//SIGNATURE_CHECK (GNULIB_NAMESPACE::log10, double, (double));

//SIGNATURE_CHECK (GNULIB_NAMESPACE::log1p, double, (double));

//SIGNATURE_CHECK (GNULIB_NAMESPACE::logb, double, (double));

#if GNULIB_TEST_LOGF
SIGNATURE_CHECK (GNULIB_NAMESPACE::logf, float, (float));
#endif
//SIGNATURE_CHECK (GNULIB_NAMESPACE::log, double, (double));
#if GNULIB_TEST_LOGL
SIGNATURE_CHECK (GNULIB_NAMESPACE::logl, long double, (long double));
#endif

#if GNULIB_TEST_LOG10F
SIGNATURE_CHECK (GNULIB_NAMESPACE::log10f, float, (float));
#endif

#if GNULIB_TEST_MODFF
SIGNATURE_CHECK (GNULIB_NAMESPACE::modff, float, (float, float *));
#endif
//SIGNATURE_CHECK (GNULIB_NAMESPACE::modf, double, (double, double *));

//SIGNATURE_CHECK (GNULIB_NAMESPACE::nextafter, double, (double, double));

#if GNULIB_TEST_POWF
SIGNATURE_CHECK (GNULIB_NAMESPACE::powf, float, (float, float));
#endif
//SIGNATURE_CHECK (GNULIB_NAMESPACE::pow, double, (double, double));

//SIGNATURE_CHECK (GNULIB_NAMESPACE::remainder, double, (double, double));

#if GNULIB_TEST_RINTF
SIGNATURE_CHECK (GNULIB_NAMESPACE::rintf, float, (float));
#endif
#if GNULIB_TEST_RINT
SIGNATURE_CHECK (GNULIB_NAMESPACE::rint, double, (double));
#endif
#if GNULIB_TEST_RINTL
SIGNATURE_CHECK (GNULIB_NAMESPACE::rintl, long double, (long double));
#endif

#if GNULIB_TEST_ROUNDF
SIGNATURE_CHECK (GNULIB_NAMESPACE::roundf, float, (float));
#endif
#if GNULIB_TEST_ROUND
SIGNATURE_CHECK (GNULIB_NAMESPACE::round, double, (double));
#endif
#if GNULIB_TEST_ROUNDL
SIGNATURE_CHECK (GNULIB_NAMESPACE::roundl, long double, (long double));
#endif

#if GNULIB_TEST_SINF
SIGNATURE_CHECK (GNULIB_NAMESPACE::sinf, float, (float));
#endif
//SIGNATURE_CHECK (GNULIB_NAMESPACE::sin, double, (double));
#if GNULIB_TEST_SINL
SIGNATURE_CHECK (GNULIB_NAMESPACE::sinl, long double, (long double));
#endif

#if GNULIB_TEST_SINHF
SIGNATURE_CHECK (GNULIB_NAMESPACE::sinhf, float, (float));
#endif
//SIGNATURE_CHECK (GNULIB_NAMESPACE::sinh, double, (double));

#if GNULIB_TEST_SQRTF
SIGNATURE_CHECK (GNULIB_NAMESPACE::sqrtf, float, (float));
#endif
//SIGNATURE_CHECK (GNULIB_NAMESPACE::sqrt, double, (double));
#if GNULIB_TEST_SQRTL
SIGNATURE_CHECK (GNULIB_NAMESPACE::sqrtl, long double, (long double));
#endif

#if GNULIB_TEST_TANF
SIGNATURE_CHECK (GNULIB_NAMESPACE::tanf, float, (float));
#endif
//SIGNATURE_CHECK (GNULIB_NAMESPACE::tan, double, (double));
#if GNULIB_TEST_TANL
SIGNATURE_CHECK (GNULIB_NAMESPACE::tanl, long double, (long double));
#endif

#if GNULIB_TEST_TANHF
SIGNATURE_CHECK (GNULIB_NAMESPACE::tanhf, float, (float));
#endif
//SIGNATURE_CHECK (GNULIB_NAMESPACE::tanh, double, (double));

#if GNULIB_TEST_TRUNCF
SIGNATURE_CHECK (GNULIB_NAMESPACE::truncf, float, (float));
#endif
#if GNULIB_TEST_TRUNC
SIGNATURE_CHECK (GNULIB_NAMESPACE::trunc, double, (double));
#endif
#if GNULIB_TEST_TRUNCL
SIGNATURE_CHECK (GNULIB_NAMESPACE::truncl, long double, (long double));
#endif

//SIGNATURE_CHECK (GNULIB_NAMESPACE::y0, double, (double));

//SIGNATURE_CHECK (GNULIB_NAMESPACE::y1, double, (double));

//SIGNATURE_CHECK (GNULIB_NAMESPACE::yn, double, (int, double));

#if GNULIB_TEST_ISFINITE
# ifdef isfinite
#  error "isfinite should not be a macro in C++"
# endif
REAL_FLOATING_CHECK (isfinite, int, (float), int, (double), int, (long double));
#endif

#if GNULIB_TEST_ISINF
# ifdef isinf
#  error "isinf should not be a macro in C++"
# endif
REAL_FLOATING_CHECK (isinf, int, (float), int, (double), int, (long double));
#endif

#if GNULIB_TEST_ISNAN
# ifdef isnan
#  error "isnan should not be a macro in C++"
# endif
REAL_FLOATING_CHECK (isnan, int, (float), int, (double), int, (long double));
#endif

#if GNULIB_TEST_SIGNBIT
# ifdef signbit
#  error "signbit should not be a macro in C++"
# endif
REAL_FLOATING_CHECK (signbit, int, (float), int, (double), int, (long double));
#endif


int
main ()
{
}
