#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>

int read_word(int fd){
	int buffer=0;
	read(fd, &buffer, 4);
	return buffer;
}
short read_half(int fd){
	short buffer=0;
	read(fd, &buffer, 2);
	return buffer;
}
void write_word(int fd, int word){
	write(fd, &word, 4);
}
void write_half(int fd, short word){
	write(fd, &word, 2);
}
