#ifndef runner_h
#define runner_h

#include "../mirror/particle.h"
#include "memoryspace.h"
#include "pixel.h"
class runner
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
