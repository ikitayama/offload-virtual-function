//#ifndef _MYLIB_H
//#define _MYLIB_H

class Base {
public:
#pragma omp declare target
virtual bool is_subnet();
#pragma omp end declare target

};

class Derived : public Base {
public:
#pragma omp declare target
bool is_subnet();
#pragma omp end declare target
};

class Derived2 : public Base {
public:

bool is_subnet() {
	if (1) {
		return true;
	}
};
};
//#endif
