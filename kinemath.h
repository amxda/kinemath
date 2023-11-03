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
enum pm_kine_arg {
	KINE_D,
	KINE_T,
	KINE_V0,
	KINE_V,
	KINE_A
};

/*
 * pm_kine0: v = v0 + at
 */
inline double
pm_kine0(double v0, double v, double a, double t, enum pm_kine_arg solve_arg)
{
	switch (solve_arg)
	{
		// pm_kine0 code here
		default: {
			perror("pm_kine0(): invalid solve_arg");
			exit(EXIT_FAILURE);
		}
	}

	__builtin_unreachable();
}

/*
 * pm_kine1: dx = ((v + v0) / 2)(t)
 */
inline double
pm_kine1(double d, double v0, double v, double t, enum pm_kine_arg solve_arg)
{
	switch (solve_arg)
	{
		// pm_kine1 code here
		default: {
			perror("pm_kine1(): invalid solve_arg");
			exit(EXIT_FAILURE);
		}
	}

	__builtin_unreachable();
}

/*
 * pm_kine2: dx = v0t + (1/2)(a)(t^2)
 */
inline double
pm_kine2(double d, double v0, double a, double t, enum pm_kine_arg solve_arg)
{
	switch (solve_arg)
	{
		// pm_kine2 code here
		default: {
			perror("pm_kine2(): invalid solve_arg");
			exit(EXIT_FAILURE);
		}
	}

	__builtin_unreachable();
}

/*
 * pm_kine3: v^2 = v0^2 + 2a(dx)
 */
inline double
pm_kine3(double d, double v0, double v, double a, enum pm_kine_arg solve_arg)
{
	switch (solve_arg)
	{
		// pm_kine3 code here
		default: {
			perror("pm_kine3(): invalid solve_arg");
			exit(EXIT_FAILURE);
		}
	}

	__builtin_unreachable();
}

#endif
