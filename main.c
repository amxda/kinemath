/* main.c - BSD-3-Clause

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


#include <stdio.h>
#include "kinemath.h"


/*
 *
 * Test/example code
 *
 * NOTE: You don't need this to use kinemath!
 *	Simply use the kinemath.h header library in your project.
 *
 */
int main(int argc, char** argv)
{
	double equ0 = km_equ0(14.9, 29, -1, 83.481, KINE_A);
	printf("equ0:\n  expected value -> 0.168901\n  actual value -> %lf\n", equ0);

	double equ1 = km_equ1(82.18, -1, 92.1, 83.481, KINE_V0);
	printf("equ1:\n  expected value -> 13628.837160\n  actual value -> %lf\n", equ1);
	
	double equ2 = km_equ2(4.924, 11.3, 7.22873, -1, KINE_T);
	printf("equ2:\n  expected value -> 0.168901\n  actual value -> %lf\n", equ2);

	double equ3 = km_equ3(-1, 3.19, 17.333337, 13.2, KINE_D);
	printf("equ3:\n  expected value -> 10.995018\n  actual value -> %lf\n", equ3);
	
	return 0;
}
