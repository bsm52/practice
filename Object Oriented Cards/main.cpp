#include <iostream>
#include "deck.hpp"
using namespace std;


int main()
{
    Suited card(1, Two, Hearts);
    Deck deck = make_std_deck();
    for(size_t i = 0; i < deck.size(); i++)
    {
        Suited* s = static_cast<Suited *>(deck[i]);
        cout << s->suit << " " << s->rank << endl;
    }

    return 0;
}
