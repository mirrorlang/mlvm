#include "memoryspace.h"


memoryspace::memoryspace()
{
	resize(N);
};
void memoryspace::resize(int64 n)
{
	if (n == N) {
		return;
	}
	N = n;
	int64 c = cap();
	//NullAtom *newer = new NullAtom[c];
	//memcpy(newer, space, c * (sizeof(Atom)));
	//todo
	//space = newer;
}

int64 memoryspace::cap() {
	return (int64(4) << (N * 2));
}

Atom* memoryspace::read(int64 x, int64 y)
{
	return NULL;
}

bool memoryspace::write(int64 x, int64 y, Atom* value)
{
	return false;
}
  
 

bool memoryspace::malloc(int64 x, int64 y)
{
	return false;
}
