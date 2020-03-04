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
		memoryspace() {
			resize(N);
		};
		void resize(int64 n) {
			if (n == N) {
				return;
			}
			N = n;
			int64 c = cap();
			pixel* newer = new pixel[c];
			memcpy(newer, space, c*(sizeof(pixel)));
		}
		int64 cap() {
			return (int64(4) << (N*2));
		}
		pixel read(int64 x, int64 y);
		bool write(int64 x, int64 y, pixel value);

		bool malloc(int64 xrange,int64 yrange);
		~memoryspace()
		{
			
		}
};
#endif