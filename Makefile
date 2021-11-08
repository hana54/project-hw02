SRC=$(wildcard src/*c)
OBJ=$(patsubst %c, %o, $(SRC))
EXESRC=$(wildcard exesrc/*.c)
EXEOBJ=$(patsubst %.c, %.o, $(EXESRC))
EXE=$(patsubst exesrc/%.c, exe/%.elf, $(EXESRC))


all: $(EXE)

exe/%.elf: exesrc/%.o $(OBJ)
	gcc $^ -o $@ -lm

%.o: %.c
	gcc -c $< -I inc/ -o $@

clean:
	rm -f $(OBJ) $(EXE) $(EXEOBJ)
	
	
run:
	for x in  exe/*.elf; do ./$$x; done


