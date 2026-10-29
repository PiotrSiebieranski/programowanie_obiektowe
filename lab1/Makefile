CXX=clang++
TARGET=main

$TARGET: main.cpp
	${CXX} main.cpp liczba.cpp complex.cpp -o ${TARGET}

run: ${TARGET}
	./${TARGET}

r: run
