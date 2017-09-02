#include <iostream>
#include "card.hpp"

using namespace std;

int main()
{
   Rank r1 = Two;
   Rank r2 = Ace;
   cout << (r1 == r2) << endl;
   cout << (r1 < r2) << endl;

   //int mn = Jack; //Widening Conversion. Okay.

   //Rank r3 = 4; //Narrowing Conversion. Bad. Error's occur

   Card c1 {Ace, Spades};
   Card c2 {Four, Hearts};


}
