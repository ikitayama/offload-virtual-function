#include <cmath>
#include <vector>
#include <iostream>
#include "mylib.h"

#pragma omp declare target
bool
Base::is_subnet()
{
  return false;
}
#pragma omp end declare target

#pragma omp declare target
bool Derived::is_subnet() { 
	for (int i =0;i<1024;i++) {
	}
	return true;
}
#pragma omp end declare target
/*
#pragma omp declare target
bool __attribute__ ((noinline)) test(Base *b)
{
	return b->is_subnet();
}
#pragma omp end declare target
*/
