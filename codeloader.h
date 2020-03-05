#ifndef codeloader_h
#define codeloader_h

#include <string>

#include "../mirror/atom.h"

class module {

};

class expression {
	public:
		Atom* atom;
		int64 pixelscount;
};
class runner {
	public:
		expression* expressions;
		int64 expressionscount;
};
class program {
	public :
	runner* runners;
	int64 runnercount;
};

class codeloader
{
	public:
		void load(std::string path);
};
#endif 

