//
//  RangeBasedFor.cpp
//  C++11
//
//  Created by Rowan James on 09/12/2012.
//  Copyright 2012 Rowan James. All rights reserved.
//

// this class' header
#import "RangeBasedFor.hpp"

// other headers within the project
#import "TypeInference.hpp"

// system and library headers
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
// RangeBasedFor class implementation
RangeBasedFor::RangeBasedFor()
{
	auto list(makeItemList());
	for (auto item : list) {
		std::cout << "Looping for item: " << item.name
		<< " item autocompletes still " << item.value
		<< std::endl;

	}
}

