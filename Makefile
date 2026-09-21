CXX = g++
CXXFLAGS = -std=c++17 -Wall

build:
	mkdir -p build
	$(CXX) $(CXXFLAGS) src/calculator.cpp tests/test_calculator.cpp -o build/tests

test:
	./build/tests

clean:
	rm -rf build