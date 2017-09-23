#ifndef DECK_HPP
#define DECK_HPP
#include "cards.hpp"
#include "vector"
#include <time.h>
#include <random> //random engine



using Deck = std::vector<Card>;

Deck make_standard_deck(); //makes a standard 52 Card deck
void shuffle(Deck&); //Shuffles the deck
void printdeck(Deck); //Prints a deck of cards
void sortdeck(Deck &);


#endif // DECK_HPP
