CC = g++
STD =
PROGRAM = ascii_art

$(PROGRAM).out: main.cpp ascii.cpp
	$(CC) $(STD) main.cpp ascii.cpp -o $(PROGRAM).out

clean:
	rm -f *.o
	rm -f *.out

run:
	./$(PROGRAM).out "AA maker" "by voidhoge"
