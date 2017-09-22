#include "cards.hpp"
#include "vector"

using Deck = std::vector<Card>;


Deck make_standard_deck(); //makes a standard 52 Card deck
void shuffle(Deck&); //Shuffles the deck
void printdeck(Deck); //Prints a deck of cards
void sortdeck(Deck &);

/*
struct Deck
{
    deck();
    std::vector<Card> cards;
};
*/
