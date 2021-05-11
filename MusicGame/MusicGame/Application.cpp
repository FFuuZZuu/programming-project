#include <iostream>
#include "Deck.h"

int main()
{
	Deck* deck = new Deck();

	Card* topCard = deck->GetTopCard();
	std::cout << topCard->PrintStr() << std::endl;
}