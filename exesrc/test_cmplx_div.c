#include <cmplx.h>
#include <stdio.h>
#include <stdlib.h>


int main(void){
	cmplx_t a={2,3};
	cmplx_t b={1,2};
	cmplx_t c;
	cmplx_div(a, b, c);
	printf("%f %f", c[0], c[1]);
	return 0;
}
