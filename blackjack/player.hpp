#ifndef PLAYER_HPP
#define PLAYER_HPP
#include "card.hpp"
#include <deque>

class Player  //The player class which holds the "hand"
{
public:
    int total();
    void hit();
    bool bust = false;
    bool stand = false;
    std::deque<Card> hand; //creates a deque of cards to make the hand
    Card take();  //plays the card
    void give(Card);  //receives the car
    void print(Player); //prints the cards in the hand
};

void play(Player, Player);
void winner(Player, Player);


#endif // PLAYER_HPP
