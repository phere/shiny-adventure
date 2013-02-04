//
//  InheritanceKeywords.cpp
//  C++11
//
//  Created by Rowan James on 10/12/2012.
//  Copyright 2012 Rowan James. All rights reserved.
//

// this class' header
#import "InheritanceKeywords.hpp"

// other headers within the project
#include "Demangle.hpp"

// system and library headers
#include <iostream>
#include <memory> // std::shared_ptr, std::make_shared

//-----------------------------------------------------------------------------
// static code and helpers
// an 'unnamed-namespace' (7.3.1.1) isolates code to this file
namespace
{
	// constants

	// helper functions and classes
	struct Base
	{
		virtual ~Base() {}
		
		virtual void one()
		{
			std::cout << "Base::one()" << std::endl;
		}
		virtual void two()
		{
			std::cout << "Base::two()" << std::endl;
		}
		void three()
		{
			std::cout << "Base::three()" << std::endl;
		}
	};
	
	struct Derived
	: public Base
	{
		void one() // final
		{
			std::cout << "Derived::one()" << std::endl;
		}
		void two() override
		{
			std::cout << "Derived::two()" << std::endl;
		}
//		using Base::two;
/*		void two(int arg)
		{
			std::cout << "Derived::two(int)" << std::endl;
		}*/
	};
	
	struct DerivedTwo
	: public Derived
	{
		void one()
		{
			std::cout << "DerivedTwo::one()" << std::endl;
		}
		void three()
		{
			std::cout << "DerivedTwo::three()" << std::endl;
		}
	};
}

//-----------------------------------------------------------------------------
// InheritanceKeywords class implementation
InheritanceKeywords::InheritanceKeywords()
{
	std::shared_ptr<Base> basePtr;
	auto twoPtr = std::make_shared<DerivedTwo>();
	basePtr = twoPtr;
	
	std::cout << "via basePtr (" << typeName(basePtr) << "):" << std::endl;
	basePtr->one();
	basePtr->two();
	basePtr->three();
	
	std::cout << "via twoPtr (" << typeName(twoPtr) << "):" << std::endl;
	twoPtr->one();
	twoPtr->two();
	twoPtr->three();
}
