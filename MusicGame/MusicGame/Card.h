#pragma once
#include <string>

enum class CardColours
{
	Red = 0,
	Yellow,
	Black
};

class Card
{
public:
	Card(CardColours colour, int value);

	const std::string PrintStr() const;
private:
	CardColours m_CardColour;
	int m_CardValue;
};