//
//  DelegatingConstructors.cpp
//  C++11
//
//  Created by Rowan James on 10/12/2012.
//  Copyright 2012 Rowan James. All rights reserved.
//

// this class' header
#import "DelegatingConstructors.hpp"

// other headers within the project

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
// DelegatingConstructors class implementation

/*
 Calling a constructor with more parameters is similar to providing
 a default parameter, but has the advantage of not 'baking' the value at
 the call site.
 i.e. the defaults remain a part of the implementation, and not the interface.
 */
DelegatingConstructors::DelegatingConstructors()
: DelegatingConstructors(1)
{
	std::cout << "Delegated to another constructor; which initialised "
	"pi (" << this->pi << ") "
	"and e (" << this->e << ") for us.  Hooray!" << std::endl;

	// C++11 defines the object as constructed once /any/ constructor
	// has executed.  This means that if you have delegated (called another
	// constructor of this class), you can call virtual functions of yourself
	// or a superclass and have them dispatch correctly.
	// This is hard to demonstrate, but potentially very useful.
}

DelegatingConstructors::DelegatingConstructors(int _value)
: value(_value)
, pi(3.14159)
, e(2.71828)
{}
