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
	switch (solve_arg)
	{
		case KINE_V0: {

		}
		case KINE_V: {
		
		}
		case KINE_A: {

		}
		case KINE_T: {

		}
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
	switch (solve_arg)
	{
		case KINE_D: {

		}
		case KINE_V0: {

		}
		case KINE_V: {
		
		}
		case KINE_T: {

		}
		default: {
			perror("km_equ1(): invalid solve_arg");
			exit(EXIT_FAILURE);
		}
	}

	__builtin_unreachable();
}

/*
 * km_equ2: dx = v0t + (1/2)(a)(t^2)
 */
inline double
km_equ2(double d, double v0, double a, double t, enum km_kine_arg solve_arg)
{
	switch (solve_arg)
	{
		case KINE_D: {

		}
		case KINE_V0: {

		}
		case KINE_A: {
		
		}
		case KINE_T: {

		}
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
	switch (solve_arg)
	{
		case KINE_D: {

		}
		case KINE_V0: {

		}
		case KINE_V: {
		
		}
		case KINE_A: {

		}
		default: {
			perror("km_equ3(): invalid solve_arg");
			exit(EXIT_FAILURE);
		}
	}

	__builtin_unreachable();
}

#endif
