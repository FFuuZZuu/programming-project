#pragma once
#include <vector>
#include "Card.h"

class Deck
{
public:
	Deck();

	Card* GetTopCard();

	void ShuffleCards();
private:
	std::vector<Card*> m_Cards;
};
