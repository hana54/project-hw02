#include <cmplx.h>
#include <stdio.h>
#include <stdlib.h>



int main(void){
	cmplx_t a={2,3};
	printf("%f", cmplx_phs(a));
	return 0;
}
