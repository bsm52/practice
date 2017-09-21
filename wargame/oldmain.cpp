//Brandon Meier 3108150

#include <iostream>
#include "cards.hpp"
#include <vector>
#include <algorithm> // shuffle function
#include <random> //random engine
#include <time.h>

void printdeck (std::vector<Card>(deck))
{
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

using namespace std;
std::minstd_rand prng;

int main()
{
   /*Rank r1 = Two;
   Rank r2 = Ace;
   cout << (r1 == r2) << endl;
   cout << (r1 < r2) << endl;
    */
   //int mn = Jack; //Widening Conversion. Okay.

   //Rank r3 = 4; //Narrowing Conversion. Bad. Error's occur

   //Card c1 {Ace, Spades};
   //Card c2 {Four, Hearts};

   //Card c;

   //Declaration invokes a constructor to intialize an object (c3)
   //Card c3 = c1;

   //

    //create a deck of cards.
   std::vector<Card> deck;
   deck.reserve(52);
   for (int r = Ace; r <= King; ++r)
   {
       for (int s = Hearts; s <= Spades; ++s)
       {
           Card c{static_cast<Rank>(r), static_cast<Suit>(s)}; //static cast changes the type
           deck.push_back(c);
       }
   }
    cout << "here are the cards in the deck!" << endl;

   printdeck(deck);

   cout << endl;
   cout << "here are the cards in the deck after shuffling!" << endl;

   prng.seed(time(0));
   shuffle(begin(deck), end(deck), prng);
   printdeck(deck);


   cout << "Now we must make 2 separate decks, one for each player" << endl << endl;
   std::vector<Card> deck1(52); //The first player's deck
   std::vector<Card> deck2(52);  // The second Player's deck
   for (int a = 0; a <= 25; a++)
   {
       deck1[a] = deck[a];
   }
   for (int i = 26; i <= 51; i++)
   {
       deck2[i - 26] = deck[i];
   }

   cout << "This is the First Player's deck:" << endl;
   printdeck(deck1);
   cout << endl;

   cout << "This is the second Player's deck:" << endl;
   printdeck(deck2);

   sort(deck.begin(), deck.end());
   cout << endl;
   printdeck(deck);

   return 0;
}
