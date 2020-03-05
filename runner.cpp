#include "runner.h"

void runnerthread::doooo(memoryspace *ms)
{
	while (status != state::exit) {
		Atom *pix = (*ms).read(address_x, address_y);
	}
}