#include "pixel.h"

void pixel::put(Atom *atom)
{
	value = atom;
	valuetype= type::Atom;
}

void pixel::clear()
{
	 valuetype = type::Null; 
}

void pixel::put(Molecule atom)
{
	value = &atom;
	valuetype = type::Molecule;
}
