//
//  Demangle.cpp
//  C++11
//
//  Created by Rowan James on 10/12/2012.
//  Copyright 2012 Rowan James. All rights reserved.
//

// this class' header
#import "Demangle.hpp"

// other headers within the project

// system and library headers
#import <cxxabi.h>

//-----------------------------------------------------------------------------
// static code and helpers
// an 'unnamed-namespace' (7.3.1.1) isolates code to this file
namespace
{
	// constants

	// helper functions and classes
}

//-----------------------------------------------------------------------------
// Demangle class implementation
std::string demangleTypeID(std::string const& typeName)
{
	char buf[1024];
    size_t size=sizeof(buf);
    int status;
    char* res = abi::__cxa_demangle (typeName.c_str(),
									 buf,
									 &size,
									 &status);
    return res;
}

