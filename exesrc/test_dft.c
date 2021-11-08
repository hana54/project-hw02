#include <cmplx.h>
#include <io.h>
#include <stdio.h>
#include <math.h>
#include <unistd.h>
#include <fcntl.h>

int main(void){

	cmplx_t signal[5];
	cmplx_t signal_dft[5];
	float vrijednost[10];
	
	printf("Signal:\n");
	for(int i=0; i<5;i++){
		signal[i][0]=sin(2*PI*50*i);
		signal[i][1]=0;
		printf("\t%f + %fi\n", signal[i][0], signal[i][1]);
	}
	
	cmplx_dft(signal, signal_dft, 5);
	
	int fd=open("./data/test.bin", O_WRONLY | O_CREAT | O_APPEND, S_IRWXU);
	
	for(int i=0;i<10;i++){
		vrijednost[i] = (i%2==0)?signal_dft[i/2][0]:signal_dft[i/2][1];
	}
	
	for(int i=0;;i++){
		void *a = (void *) &vrijednost[i];
		int vrijednost_ieee = *((int *) a);
		int vrijednost_cijeli_broj = (int) vrijednost[i];
		write_word(fd, vrijednost_ieee);
	}
			
	
	return 0;
}
