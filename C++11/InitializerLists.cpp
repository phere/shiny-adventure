//
//  InitializerLists.cpp
//  C++11
//
//  Created by Rowan James on 09/12/2012.
//  Copyright 2012 Rowan James. All rights reserved.
//

// this class' header
#import "InitializerLists.hpp"

// other headers within the project
#import "Item.hpp"
#import "TypeInference.hpp" // for printItemList function

// system and library headers
#include <list>
#include <string>
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
// InitializerLists class implementation
InitializerLists::InitializerLists()
{
	std::list<float> floats = { 0, 0.1, 0.2, 0.3, 42 };
	std::cout << "list of numbers:";
	for (std::list<float>::iterator it(floats.begin());
		 it != floats.end(); ++it)
	{
		std::cout << " " << *it;
	}
	std::cout << std::endl;
	

	Item created = { "created", 1.1 };
	created = { "asigned", 1.2 };
	
	std::vector<Item> demoList = makeItemList();
	printItemList(demoList); // coming up in "TypeInference"
	
//	Item fromList = { std::list<float>({4, 3.2, 8.9, 7}) };
}

std::vector<Item> makeItemList()
{
	std::vector<Item> result = {
		{ "list", 1 },
		{ "list", 2 },
		{ "sqrt(2)", 1.41421 },
		{ "e", 2.71828 },
		{ "pi", 3.14159 } };
	return result;
}
