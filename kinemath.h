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
