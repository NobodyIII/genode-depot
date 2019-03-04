
/* @(#)e_lgamma.c 1.3 95/01/18 */
/*
 * ====================================================
 * Copyright (C) 1993 by Sun Microsystems, Inc. All rights reserved.
 *
 * Developed at SunSoft, a Sun Microsystems, Inc. business.
 * Permission to use, copy, modify, and distribute this
 * software is freely granted, provided that this notice 
 * is preserved.
 * ====================================================
 *
 */

#include <sys/cdefs.h>
__FBSDID("$FreeBSD: release/8.2.0/lib/msun/src/e_lgamma.c 176451 2008-02-22 02:30:36Z das $");

/* __ieee754_lgamma(x)
 * Return the logarithm of the Gamma function of x.
 *
 * Method: call __ieee754_lgamma_r
 */

#include "math.h"
#include "math_private.h"

extern int signgam;

double
__ieee754_lgamma(double x)
{
	return __ieee754_lgamma_r(x,&signgam);
}
