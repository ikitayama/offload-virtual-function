#include <cmath>
#include <vector>
#include <iostream>
#include <assert.h>
#include <random>

#include "mylib.h"
#include "libtest.h"

int main()
{

  if (random()) {
	Base *b = new Derived();
#pragma omp target data map(to: b)
	test(b);
  } else {
	Base *b =new Derived2();
#pragma omp target data map(to: b)
	test(b);
  }

  return 0;
}
