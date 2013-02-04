//
//  TypeInference.cpp
//  C++11
//
//  Created by Rowan James on 09/12/2012.
//  Copyright 2012 Rowan James. All rights reserved.
//

// this class' header
#import "TypeInference.hpp"

// other headers within the project
#import "InitializerLists.hpp"

// system and library headers
#include <vector>
#include <iostream>

//-----------------------------------------------------------------------------
// static code and helpers
// an 'unnamed-namespace' (7.3.1.1) isolates code to this file
namespace
{
	// constants

	// helper functions and classes
}

//-----------------------------------------------------------------------------
// TypeInference class implementation
TypeInference::TypeInference()
{
	// std::vector<Item> myVar = makeItemList();
	auto myVar = makeItemList();
	
	printItemList(myVar);
}

void printItemList(std::vector<Item> const& itemList)
{
	std::cout << "list of items:";

	// would be:
/*	for (std::vector<Item>::const_iterator it(itemList.begin())
		 it != itemList.end(); ++it) */
	for (auto it(itemList.begin());
		 it != itemList.end(); ++it)
	{
		std::cout << " " << *it;
	}
	std::cout << std::endl;
}
