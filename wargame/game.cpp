#ifndef GAME_CPP
#define GAME_CPP
#include "game.hpp"
#include <iostream>
#include <deque>
#include <vector>

//Player member functions
void Player::give(Card card)
{
    hand.push_back(card);
}

Card Player::take()
{
    std::cout << "yay" << std::endl;
    Card card = hand.front();
    std::cout << "yay" << std::endl;
    hand.pop_front();
    return card;
}

bool Player::empty()
{
    if (hand.size() == 0)
        return true;
    else
        return false;
}

void deal(Deck& d, Player p, int size) //deal function to split the deck between the players
{
    for(int i = 0; i < size; i++)
    {
        p.hand.push_back(d[size - i - 1]);
        d.pop_back();
    }
}

//Pile functions

void Pile::add(Card d)
{
    lot.push_back(d);
}


#endif // GAME_CPP


