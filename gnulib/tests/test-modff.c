/* Test of modff() function.
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

/* Written by Bruno Haible <bruno@clisp.org>, 2010-2011.  */

#include <config.h>

#include <math.h>

#include "signature.h"
SIGNATURE_CHECK (modff, float, (float, float *));

#include "macros.h"

volatile float x;
float y;
float z;

int
main ()
{
  /* A particular positive value.  */
  x = 5.972407f;
  y = modff (x, &z);
  ASSERT (y >= 0.972406f && y <= 0.972408f);
  ASSERT (z == 5.0f);

  /* A particular negative value.  */
  x = -5.972407f;
  y = modff (x, &z);
  ASSERT (y >= -0.972408f && y <= -0.972406f);
  ASSERT (z == -5.0f);

  return 0;
}
