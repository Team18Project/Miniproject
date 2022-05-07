market: main.c record.o manager.o
	gcc -o main main.c manager.o record.o
manager: manager.c manager.h
	gcc -c manager.c
record: record.c record.h
	gcc -c record.c
clean:
	rm *.o main
