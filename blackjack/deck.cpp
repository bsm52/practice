#ifndef DECK_CPP
#define DECK_CPP
#include "deck.hpp"

#include <iostream>
#include <random>
#include <algorithm>
#include <vector>

Deck
make_standard_deck()
{
  Deck d {
    {Ace, Spades},
    {Two, Spades},
    {Three, Spades},
    {Four, Spades},
    {Five, Spades},
    {Six, Spades},
    {Seven, Spades},
    {Eight, Spades},
    {Nine, Spades},
    {Ten, Spades},
    {Jack, Spades},
    {Queen, Spades},
    {King, Spades},

    {Ace, Clubs},
    {Two, Clubs},
    {Three, Clubs},
    {Four, Clubs},
    {Five, Clubs},
    {Six, Clubs},
    {Seven, Clubs},
    {Eight, Clubs},
    {Nine, Clubs},
    {Ten, Clubs},
    {Jack, Clubs},
    {Queen, Clubs},
    {King, Clubs},

    {Ace, Hearts},
    {Two, Hearts},
    {Three, Hearts},
    {Four, Hearts},
    {Five, Hearts},
    {Six, Hearts},
    {Seven, Hearts},
    {Eight, Hearts},
    {Nine, Hearts},
    {Ten, Hearts},
    {Jack, Hearts},
    {Queen, Hearts},
    {King, Hearts},

    {Ace, Diamonds},
    {Two, Diamonds},
    {Three, Diamonds},
    {Four, Diamonds},
    {Five, Diamonds},
    {Six, Diamonds},
    {Seven, Diamonds},
    {Eight, Diamonds},
    {Nine, Diamonds},
    {Ten, Diamonds},
    {Jack, Diamonds},
    {Queen, Diamonds},
    {King, Diamonds},
  };
  return d;
}

Deck
make_combined_deck(const Deck& d1, const Deck& d2)
{
  Deck d;
  d.insert(d.end(), d1.begin(), d1.end());
  d.insert(d.end(), d2.begin(), d2.end());
  return d;
}

void
shuffle(Deck& d)
{
  // Function-local extern variable.
  extern std::minstd_rand prng;

  std::shuffle(d.begin(), d.end(), prng);
}

void
print(const Deck& deck)
{
  // Range-base for loop.
  int i = 1;
  for (Card c : deck) {
    std::cout << c << ' ';
    if (i % 13 == 0) {
      std::cout << '\n';
      i = 0;
    }
    ++i;
  }
  std::cout << '\n';
}

//draw function for the hit function
void draw(Deck deck, Player player)
{
    player.hand.push_back(deck.pop_back());
}


//deal function
void deal(Deck& d, Player p, int size) //deal function to split the deck between the players
{
    for(int i = 0; i < size; i++)
    {
        p.hand.push_back(d[i]);
        d.erase(i);
    }

}

#endif // DECK_CPP
