#ifndef DECK_HPP
#define DECK_HPP
#include "card.hpp"
#include "player.hpp"

#include <vector>


// Pragmatic approach. Don't write a class if you don't
// need to.
using Deck = std::vector<Card>;

// Make a standard deck of cards.
Deck make_standard_deck();

// Combine two decks of cards.
Deck make_combined_deck(const Deck& d1, const Deck& d2);

// Shuffle a deck of cards.
void shuffle(Deck& d);

// Print a deck of cards.
void print(const Deck& d);

void draw(Deck&, Player);

void deal(Deck& d, Player p, int size);


#endif // DECK_HPP




// // Very object oriented. Use a class to build a better
// // abstraction.
// struct Deck
// {
//   Deck() { ... };

//   void shuffle();

//   std::vector<Card> cards;
// };


// Deck d;
// d.shuffle();
// d.sort();
