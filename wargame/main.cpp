//Brandon Meier 3108150

#include <iostream>
#include "card.hpp"
#include <vector>

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


}
