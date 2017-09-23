#ifndef GAME_HPP
#define GAME_HPP
#include <iostream>
#include "deck.hpp"
#include <deque>
#include <vector>

using Hand=std::deque<Card>;


struct Options  //Game options that can be configured by the user
{
    int num_decks = 1;
    bool ace_high = true;
    int num_sacrafices = 1;
    bool negotiable = true;
};

class Player  //The player class which holds the "hand"
{
public:
    std::deque<Card> hand; //creates a deque of cards to make the hand
    Card take();  //plays the card
    void give(Card);  //receives the card
    bool empty();
};

void deal(Deck& d, Player p, int size); //deal function to split the deck between the players

class Pile
{
    public:
        std::vector<Card>lot;
        void add(Card);
};

/*struct Game
{
    Options options;
    Deck deck = make_standard_deck();
    Player p1;
    Player p2;
    Pile pile;
    int turns = 0;
};
*/



#endif // GAME_HPP


