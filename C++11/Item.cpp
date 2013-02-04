//
//  Item.cpp
//  C++11
//
//  Created by Rowan James on 09/12/2012.
//  Copyright 2012 Rowan James. All rights reserved.
//

// this class' header
#import "Item.hpp"

// other headers within the project

// system and library headers

//-----------------------------------------------------------------------------
// static code and helpers
// an 'unnamed-namespace' (7.3.1.1) isolates code to this file
namespace
{
	// constants
	const bool printItemOps = false;

	// helper functions and classes
}

std::ostream& operator<<(std::ostream& os, Item const& item)
{
	std::cout << "\tItem(\"" << item.name << "\"\t, " << item.value << ")"
//	"at:" << &item
	<< std::endl;
	return os;
}

//-----------------------------------------------------------------------------
// Item class implementation
Item::Item(std::string _name,
		   float _value)
: name(_name)
, value(_value)
{
	if (printItemOps)
	{
		std::cout << "constructed" << *this;
	}
}



Item::Item(Item const& source)
: name(source.name)
, value(source.value)
{
	if (printItemOps)
	{
		std::cout << "copied" << *this;
	}
}

Item& Item::operator=(Item const& rhs)
{
	name = rhs.name;
	value = rhs.value;
	if (printItemOps)
	{
		std::cout << "assigned" << *this;
	}
	return *this;
}
