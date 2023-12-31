/* kinemath.h - BSD-3-Clause

Copyright (c) 2023 amxda

Redistribution and use in source and binary forms, with or without modification, are permitted
provided that the following conditions are met:

    1. Redistributions of source code must retain the above copyright notice, this list of
		conditions and the following disclaimer.
    2. Redistributions in binary form must reproduce the above copyright notice, this list of
		conditions and the following disclaimer in the documentation and/or other materials
		provided with the distribution.
    3. Neither the name of the copyright holder nor the names of its contributors may be used
		to endorse or promote products derived from this software without specific prior 
		written permission.

	THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS
	OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF 
	MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
	COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
	EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE
	GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
	AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT 
	(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, 
	EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

*/


#ifndef _KINEMATH_H
#define _KINEMATH_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/*
 * Displacement:		KINE_D
 * Time (Delta):		KINE_T
 * Velocity (Initial):	KINE_V0
 * Velocity (Final):	KINE_V
 * Acceleration:		KINE_A
 */
enum km_kine_arg {
	KINE_D,
	KINE_T,
	KINE_V0,
	KINE_V,
	KINE_A
};

/*
 * km_equ0: v = v0 + at
 */
inline double
km_equ0(double v0, double v, double a, double t, enum km_kine_arg solve_arg)
{
	switch (solve_arg) {
		case KINE_V0: return v - (a * t);
		case KINE_V: return v0 + (a * t);
		case KINE_A: return (v - v0) / t;
		case KINE_T: return (v - v0) / a;

		default: {
			perror("km_equ0(): invalid solve_arg");
			exit(EXIT_FAILURE);
		}
	}
	__builtin_unreachable();
}

/*
 * km_equ1: dx = ((v + v0) / 2)(t)
 */
inline double
km_equ1(double d, double v0, double v, double t, enum km_kine_arg solve_arg)
{
	switch (solve_arg) {
		case KINE_D: return ((v + v0) / 2) * t;
		case KINE_V0: return (2 * d * t) - v;
		case KINE_V: return (2 * d * t) - v0;
		case KINE_T: return d / ((v + v0) / 2);
		default: {
			perror("km_equ1(): invalid solve_arg");
			exit(EXIT_FAILURE);
		}
	}
	__builtin_unreachable();
}

/*
 * km_equ2: dx = v0t + (1/2)(a)(t^2)
 *
 * NOTE: for KINE_T, exits when there are 0 or more than one valid distinct solutions
 */
inline double
km_equ2(double d, double v0, double a, double t, enum km_kine_arg solve_arg)
{
	switch (solve_arg) {
		case KINE_D: return (v0 * t) + (0.5 * a * (t * t));
		case KINE_V0: return (d - (0.5 * a * (t * t))) / t;
		case KINE_A: return (2 * (d - (v0 * t))) / (t * t);
		case KINE_T: {
			double b2m4ac = (v0 * v0) + (2 * d);
			if (b2m4ac == 0) {
				// one real solution
				return d;
			} else if (b2m4ac > 0) {
				// two distinct real solutions
				double root0 = d + sqrt(b2m4ac);
				double root1 = d - sqrt(b2m4ac);
				if (root0 < 0) {
					return root1;
				}
				if (root1 < 0) {
					return root0;
				}

				// too many valid distinct solutions
				perror("km_equ2(): too many valid distinct solutions");
				exit(EXIT_FAILURE);
			} else {
				// no real solutions
				perror("km_equ2(): no real solutions");
				exit(EXIT_FAILURE);
			}
		};
		default: {
			perror("km_equ2(): invalid solve_arg");
			exit(EXIT_FAILURE);
		}
	}
	__builtin_unreachable();
}

/*
 * km_equ3: v^2 = v0^2 + 2a(dx)
 */
inline double
km_equ3(double d, double v0, double v, double a, enum km_kine_arg solve_arg)
{
	switch (solve_arg) {
		case KINE_D: return ((v * v) - (v0 * v0)) / (2 * a);
		case KINE_V0: return sqrt((v * v) + (2 * a * d));
		case KINE_V: return sqrt((v0 * v0) + (2 * a * d));
		case KINE_A: return ((v * v) - (v0 * v0)) / (2 * d);
		default: {
			perror("km_equ3(): invalid solve_arg");
			exit(EXIT_FAILURE);
		}
	}
	__builtin_unreachable();
}

#endif
