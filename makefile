explode: lab1.o main.o 
	$(CC) -o $@ $?

lab1.o: lab1.c
	$(CC) -c $?

main.o: main.c
	$(CC) -c $?

clean:
	-rm -f *.o
	@echo "All clean!"
