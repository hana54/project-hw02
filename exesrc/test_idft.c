#include <cmplx.h>
#include <io.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main(void){

	cmplx_t signal[5];
	cmplx_t signal_idft[5];

	int fd=open("./data/test.bin",O_RDONLY | O_CREAT | O_APPEND, S_IRWXU);

	for(int i=0;i<10;i++){

        	int vrijednost_ieee = read_word(fd);
        	void *a = (void *) &vrijednost_ieee;
        	float vrijednost = *((float *) a);

        	signal[i/2][i%2]=vrijednost;

	}

	cmplx_idft(signal, signal_idft, 5);


	for(int i=0;i<5;i++){
	printf("IDFT  %d = %f + %f*i\n",i,signal_idft[i][0],signal_idft[i][1]);
	}

	return 0;
}
