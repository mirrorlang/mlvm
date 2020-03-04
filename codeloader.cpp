#include "codeloader.h"

#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/xml_parser.hpp>
 

void codeloader::load(std::string path)
{
	boost::property_tree::ptree tree;
	read_xml(path,tree);
	tree.get_child("");
}
