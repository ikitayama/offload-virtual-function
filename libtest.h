class Base;

#pragma omp declare target
bool __attribute__ ((noinline)) test(Base *b);
#pragma omp end declare target

