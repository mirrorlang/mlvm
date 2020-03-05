#include "codeloader.h"

#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/xml_parser.hpp>
#include <iostream>
 

void codeloader::load(std::string path)
{
	boost::property_tree::ptree tree;
	read_xml(path,tree);
	auto program =tree.get_child("program");
	auto runners = program.get_child("runner");
	for (auto r = runners.begin(); r != runners.end(); ++r)  //boost中的auto
	{
		auto expression = r->second;
		for (auto pos = expression.begin(); pos != expression.end(); ++pos)  //boost中的auto
		{
			std::cout << pos->first.data();
			std::cout << "\t" + pos->second.data();
		}
		std::cout << std::endl;
	}
	//std::cout << "\t" + runners.data();
	
}
