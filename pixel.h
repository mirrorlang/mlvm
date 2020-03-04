#ifndef pixel_h
#define pixel_h
#include <memory>
#include "../mirror/particle.h"
#include "../mirror/atom.h"
#include "../mirror/molecule.h"

class pixel
{
	private:

		std::unique_ptr<Atom> atom;
		std::unique_ptr<Molecule> molecule;
	public:
		enum class type {
			Null=(byte)particle::null,
			Atom=(byte)particle::atom,
			Molecule = (byte)particle::molecule,
		};
		type valuetype;
		void* value;
		pixel() :valuetype(type::Null) {};
		void put(Atom *atom) ;
		void clear();
		void put(Molecule atom);
		
};

#endif