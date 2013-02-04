//
//  Demangle.hpp
//  C++11
//
//  Created by Rowan James on 10/12/2012.
//  Copyright 2012 Rowan James. All rights reserved.
//

#include <string>
#include <typeinfo>

std::string demangleTypeID(std::string const& typeName);

template <typename T>
std::string typeName(T arg)
{
	return demangleTypeID(typeid(arg).name());
}
