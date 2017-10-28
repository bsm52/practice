#include <iostream>
#include "deck.hpp"
using namespace std;


int main()
{
    Suited card(1, Two, Hearts);
    Deck deck = make_std_deck();
    shuffle_deck(deck);

    return 0;
}
