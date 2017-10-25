#ifndef DECK_HPP
#define DECK_HPP
#include <vector>
#include "card.cpp"
using Deck = std::vector<Card*>;

Deck make_std_deck();


#endif // DECK_HPP
