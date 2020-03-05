#ifndef memoryspace_h
#define memoryspace_h
#include "../mirror/atom.h"

 
class memoryspace
{
	private:
		Atom *space;
		int64 N=9;
	public:
		memoryspace();
		void resize(int64 n);
		int64 cap();
		Atom* read(int64 x, int64 y);
		bool write(int64 x, int64 y, Atom* value);
		bool malloc(int64 xrange,int64 yrange);
		~memoryspace()
		{
			
		}
};
#endif