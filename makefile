CXX = g++
CXXFLAGS = -std=c++20

SOURCE = main.cpp
TARGET = main

default:
	${CXX} ${CXXFLAGS} ${SOURCE} -o ${TARGET}

test:
	clang++ -g -O0 -o ${TARGET} ${SOURCE}

clean:
	rm -rf ${TARGET}