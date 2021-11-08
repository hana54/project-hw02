#include <cmplx.h>
#include <stdio.h>
#include <stdlib.h>



int main(void){
	double mag= 4;
	double phs= 0.6;
	printf("%f", cmplx_imag(mag, phs));
	return 0;
}
