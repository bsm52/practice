#ifndef DECK_HPP
#define DECK_HPP
#include <vector>
#include "card.cpp"
using Deck = std::vector<Card*>;

Deck make_std_deck();
void printdeck(Deck);
void shuffle_deck(Deck);


#endif // DECK_HPP
