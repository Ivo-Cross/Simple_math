/** \file simple_math_test_td.c
	\brief main for testing the library 
	\author Paolo Gastaldo
  
*/

#include <stdio.h> 
#include "simple_math.h" 

int main() {
	
	int a = 6; 
	int b = 2; 
	int c;
	
	float average; 
	
	cx_int_t ca = {6,6};
	cx_int_t cb = {2,2};

	cx_float_t cav= {0.,0.};
	
	
	cav = cx_mean(ca,cb);
	
	printf("\nThe mean of (%d,%di) and (%d,%di) is: (%f,%fi)",ca.re,ca.imm,cb.re,cb.imm,cav.re,cav.imm); 
	
	average = mean(a,b);
	
	printf("\nThe mean of %d and %d is: %f",a,b,average); 
	
	c = max(a,b); 
	
	printf("\nThe max value between %d and %d is: %d",a,b,c); 
	
	
	
	return 0;
}