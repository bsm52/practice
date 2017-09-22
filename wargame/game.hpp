#include <iostream>
#include <deck.hpp>
#include <deque>

struct Game
{
    Options options;
    Deck deck = make_standard_deck();
    Player p1;
    Player p2;
    Pile pile;
    int turns;
};

struct Options
{
    int num_decks = 1;
    bool ace_high = true;
    int num_sacrafices = 1;
    bool negotiable = true;
};

class Player
{
public:
    std::deque<Card> hand; //creates a deque of cards to make the hand
    hand deal(Deck);  //

};



