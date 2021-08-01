CC = gcc
FLAGS = -Wall

TEST: discordia.o
		$(CC) -o $@ $^ $(FLAGS)
main.o: discordia.c
		$(CC) -c $^ $(FLAGS)
run1: TEST arch1.bin
	./TEST arch1.bin

run2: TEST arch2.bin
	./TEST arch2.bin

clean:
	rm TEST *.pbm *.txt *.o