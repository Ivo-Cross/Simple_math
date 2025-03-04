/** \file simple_math.c
	\brief definition of the functions 
	\author Paolo Gastaldo
  
*/

#include "simple_math.h"

cx_float_t cx_mean (cx_int_t a,cx_int_t b) {
	
	cx_float_t average;
	
	average.re = (a.re + b.re) / 2;
	average.imm = (a.imm + b.imm) / 2;
	
	return average;
	
}


float mean(int a, int b) {
	return (a+b)/2;
}

int max (int a, int b) {
	
	if (a > b) 
		return a; 
	return b;
}