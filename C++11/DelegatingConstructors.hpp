//
//  DelegatingConstructors.hpp
//  C++11
//
//  Created by Rowan James on 10/12/2012.
//  Copyright 2012 Rowan James. All rights reserved.
//

#include "Item.hpp"

class DelegatingConstructors
// : public Item // inheriting constructors not supported in Clang 4.1
{
public:
//	using Base::Base; // inheriting constructors not yet supported in Clang 4.1
	
	DelegatingConstructors();
	DelegatingConstructors(int value);

protected:
	int value;
	float pi;
	float e;
	
	// Member initialisation enhancement:
	// all constructors use this value unless another is specified
	float five = 5.55;
	Item testItem = { "try this!", 90000.1 };
};
