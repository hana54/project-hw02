#include <cmplx.h>
#include <stdio.h>
#include <stdlib.h>


int main(void){
	cmplx_t a={2,3};
	double mag= 4;
	double phs= 0.6;
	printf("%f", cmplx_real(mag, phs));
	return 0;
}
