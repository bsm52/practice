#ifndef DECK_CPP
#define DECK_CPP
#include <iostream>
#include <algorithm> // shuffle function
#include "deck.hpp"
#include <random>
#include <time.h>



void printdeck (Deck deck)
{
   if(deck.empty())
    std::cout << "The deck is empty" << std::endl;
   int i = 0;
   for(Card a : deck) {
   std::cout << a.get_rank() << a.get_suit() << "  ";
   i++;
   if((i % 13) == 0)
   {
     std::cout << std::endl;
     i = 0;
   }
  }
}


void shuffle(Deck& d){
    unsigned seed = time(0);
    std::shuffle(begin(d), end(d), std::default_random_engine(seed));
}

Deck make_standard_deck() //Makes the deck!
{
   Deck deck;
   deck.reserve(52);
   for (int r = Ace; r <= King; ++r)
   {
       for (int s = Hearts; s <= Spades; ++s)
       {
           Card c{static_cast<Rank>(r), static_cast<Suit>(s)}; //static cast changes the type
           deck.push_back(c);
       }
   }
   return deck;
}

void sortdeck(Deck &deck) //sorts the deck!
{
    sort(deck.begin(), deck.end());
}


#endif // DECK_CPP


