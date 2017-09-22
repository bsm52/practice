#include "game.hpp"
#include <deque>


Player::void give(Card card)
{
    hand.push_back(card);
}

Player::Card take()
{
    return hand.pop_back();
}

void deal(Deck& d, Player p, int size) //deal function to split the deck between the players
{
    for(int i = 0; i < size; i++)
    {
        p.hand.push_back(d[i]);
        d.erase(i);
    }

}

//Pile functions

Pile::Pile()
{
    lot = 0;
}

Pile::add(Card d);
{
    lot.push_back(d);
}



