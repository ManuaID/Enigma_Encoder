CXX = g++
CXXFLAGS = -std=c++20

SOURCE = main.cpp
TARGET = main

default:
	${CXX} ${CXXFLAGS} ${SOURCE} -o ${TARGET}

clean:
	rm -rf ${TARGET}