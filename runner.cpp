#include "runner.h"

void runner::doooo(memoryspace *ms)
{
	while (status != state::exit) {
		pixel pix = (*ms).read(address_x, address_y);
		switch (pix.valuetype)
		{
		case pixel::type::Atom:
				break;
		case pixel::type::Molecule:
			break;
		default:
			status = state::exit;
			break;
		}
	}
}