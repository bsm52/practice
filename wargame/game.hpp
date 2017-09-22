#include <iostream>
#include <deck.hpp>
#include <deque>
#include <vector>

using Hand=std::deque<Card>;

struct Game
{
    Options options;
    Deck deck = make_standard_deck();
    Player p1;
    Player p2;
    Pile pile;
    int turns = 0;
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
    std::deque<Card> hand = 0; //creates a deque of cards to make the hand
    Card take();  //plays the card
    void give(Card);  //receives the card
};

void deal(Deck& d, Player p, int size); //deal function to split the deck between the players

class Pile
{
    public:
        std::vector<Card>lot;
        Pile();
        void add(Card);
};







