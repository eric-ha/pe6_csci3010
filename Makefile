# This is an example make file

CXX = g++  # the compiler
CXXFLAGS = -std=c++11 -ggdb -Wall  # flags for the compiler (use c++11 standards, include gdb debug info, turn on all optional warnings)

# runs for "make all"
all: main Animal.o

# runs for "make target1"
main: main.o Animal.o
	$(CXX) $(CXXFLAGS) -o main main.o Animal.o # name of output should be consistent

main.o: main.cpp Animal.h
	$(CXX) $(CXXFLAGS) -c main.cpp Animal.cpp

Animal.o: Animal.h

# runs for "make clean"
clean:
	rm main.o Animal.o main  #include all targets here
