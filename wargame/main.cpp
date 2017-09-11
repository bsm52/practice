//Brandon Meier 3108150

#include <iostream>
#include "cards.hpp"
#include <vector>
#include <algorithm> // shuffle function
#include <random> //random engine

using namespace std;

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



   //range base for loop
   for(Card c : deck) {
     cout << c.get_rank() << ' ' << c.get_suit() << endl;
   }

   cout << endl;
   cout << "here are the cards in the deck after shuffling!" << endl;
   shuffle(begin(deck), end(deck), default_random_engine());  //shuffle function

   for(Card a : deck) {
    cout << a.get_rank() << ' ' << a.get_suit() << endl;
   }

   cout << "Now we must make 2 separate decks, one for each player" << endl << endl;
   std::vector<Card> deck1(26); //The first player's deck
   std::vector<Card> deck2(26);  // The second Player's deck
   for (int a = 0; a <= 25; a++)
   {
       deck1[a] = deck[a];
   }
   for (int i = 26; i <= 51; i++)
   {
       deck2[i - 26] = deck[i];
   }

   cout << "This is the First Player's deck:" << endl;
   for(Card a : deck1) {
   cout << a.get_rank() << ' ' << a.get_suit() << endl;
   }
   cout << endl;

   cout << "This is the second Player's deck:" << endl;
   for(Card a : deck2) {
   cout <<  a.get_rank() << ' ' << a.get_suit() << endl;
   }

   return 0;
}
