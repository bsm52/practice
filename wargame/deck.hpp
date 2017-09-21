#include "cards.hpp"
#include "vector"


using Deck = std::vector<Card>;

Deck make_standard_deck();
void shuffle(Deck&);
void print;

Deck make_standard_deck()
{
    Deck d {
        {Ace, Spades},
        {
            Two, Spades
        }


    };
    return d;
}

Deck shuffle(Deck& d)
{
    extern std::minstd_rand prng;
    std::shuffle(d.begin(), d.end(), prng);
}
/*
struct Deck
{
    deck();
    std::vector<Card> cards;
};
*/
