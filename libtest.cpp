#include "libtest.h"
#include "mylib.h"

#pragma omp declare target
bool __attribute__ ((noinline)) test(Base *b)
{
	return b->is_subnet();
}
#pragma omp end declare target
