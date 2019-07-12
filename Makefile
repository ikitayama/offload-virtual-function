all:
	xlc++ -c -std=c++11 -qoffload -qsmp=omp mylib.cpp
	xlc++ -c -std=c++11 -qoffload -qsmp=omp libtest.cpp
	xlc++ -std=c++11 -qoffload -qsmp=omp mylib.o libtest.o toshi.cpp
