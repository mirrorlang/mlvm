#ifndef memoryspace_h
#define memoryspace_h
 
#include "../mirror/particle.h"
#include "../mirror/molecule.h"
#include "pixel.h"

class memoryspace
{
	private:
		pixel *space;
		int64 N=9;
	public:
		memoryspace();
		void resize(int64 n);
		int64 cap();
		pixel read(int64 x, int64 y);
		bool write(int64 x, int64 y, pixel value);
		bool malloc(int64 xrange,int64 yrange);
		~memoryspace()
		{
			
		}
};
#endif