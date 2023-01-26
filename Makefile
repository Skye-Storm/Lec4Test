CXX = g++
CXXFLAGS = -std=c++17 -Wall

all: main test

clean:
	rm main

main: main.cpp
		$(CXX) $(CXXFLAGS) main.cpp -o main

test: test.cpp 
	$(CXX) $(CXXFLAGS) test.cpp -c