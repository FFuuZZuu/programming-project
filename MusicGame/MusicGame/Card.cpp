#include "Card.h"
#include <iostream>
#include <string>

Card::Card(CardColours colour, int value)
	: m_CardColour(colour), m_CardValue(value) 
{
	std::cout << PrintStr() << std::endl;
}

const std::string Card::PrintStr() const
{
	std::string ret = "Value: ";
	ret += std::to_string(m_CardValue);

	std::string colour;
	switch (m_CardColour)
	{
	case CardColours::Black:
		colour = "Black";
		break;
	case CardColours::Red:
		colour = "Red";
		break;
	case CardColours::Yellow:
		colour = "Yellow";
		break;
	}

	ret += ", Colour: ";
	ret += colour;

	return ret;
}
