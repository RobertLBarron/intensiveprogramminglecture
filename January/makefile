# This is an example make file

CXX = g++  # the compiler
CXXFLAGS = -std=c++20 -Wall  # flags for the compiler (use c++20 standards, turn on all optional warnings); add -ggdb if you want to use gdb to debug!

# runs for "make all"
all: target1 target2

# runs for "make target1"
# the line below this one must be TABBED in (not spaces!)
# files DependsOn.o and main.cpp will be monitored for changes to know if it needs to be re-made
target1: main.cpp
	$(CXX) $(CXXFLAGS) main.cpp -o target1 # name of output should be consistent

target2: test.cpp
	$(CXX) $(CXXFLAGS) test.cpp -o target2 # name of output should be consistent

# runs for "make clean"
clean:
	rm DependsOn.o DependsOn2.o target1 target2  #include all targets here