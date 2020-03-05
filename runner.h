#ifndef runner_h
#define runner_h

#include "memoryspace.h"
 
class runnerthread
{
private:
	int64 address_x, address_y;
	enum class state :int64 {
		run,
		stop,
		exit,
	} status=state::run;
public:
	void doooo(memoryspace *ms);
};

#endif
