//
//  Item.hpp
//  C++11
//
//  Created by Rowan James on 09/12/2012.
//  Copyright 2012 Rowan James. All rights reserved.
//

#include <string>
#include <iostream>

#include <list>

class Item
{
public:
	Item(std::string name,
		 float value);
	Item(Item const& source);
	
	Item& operator=(Item const& rhs);
	
	std::string name;
	float value;
};

std::ostream& operator<<(std::ostream& os, Item const& item);
