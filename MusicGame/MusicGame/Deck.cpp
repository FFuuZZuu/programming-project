#include "Deck.h"
#include "Card.h"
#include <iostream>
#include <string>

Deck::Deck()
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			m_Cards.push_back(new Card(static_cast<CardColours>(i), j + 1));
		}
	}
}

Card* Deck::GetTopCard()
{
	return m_Cards.front();
}