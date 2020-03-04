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
	pixel* newer = new pixel[c];
	memcpy(newer, space, c * (sizeof(pixel)));
	space = newer;
}

int64 memoryspace::cap() {
	return (int64(4) << (N * 2));
}

pixel memoryspace::read(int64 x, int64 y)
{
	return pixel();
}

bool memoryspace::write(int64 x, int64 y, pixel value)
{
	return false;
}
  
 

bool memoryspace::malloc(int64 x, int64 y)
{
	return false;
}
