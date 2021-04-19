compile:
	g++ -std=c++11 -Wall -pedantic-errors -o main main.cpp
run:
	./main reverse.txt
clean:
	/bin/rm main