//
//  LambdaFunctions.cpp
//  C++11
//
//  Created by Rowan James on 09/12/2012.
//  Copyright 2012 Rowan James. All rights reserved.
//

// this class' header
#import "LambdaFunctions.hpp"

// other headers within the project
#import "TypeInference.hpp"

// system and library headers

//-----------------------------------------------------------------------------
// static code and helpers
// an 'unnamed-namespace' (7.3.1.1) isolates code to this file
namespace
{
	// constants

	// helper functions and classes
}

//-----------------------------------------------------------------------------
// LambdaFunctions class implementation
LambdaFunctions::LambdaFunctions()
{
	auto myVar = makeItemList();
	
	// Sort by descending value field
	std::sort(myVar.begin(), myVar.end(),
			  [](Item const& l, Item const& r)
			  {
				  return l.value > r.value;
			  });
	printItemList(myVar);
	
	// Sort alphabetically by name field
	std::sort(myVar.begin(), myVar.end(),
			  [](Item const& l, Item const& r)
			  {
				  return l.name < r.name;
			  });
	printItemList(myVar);
}
