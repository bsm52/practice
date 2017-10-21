#ifndef PLAYER_CPP
#define PLayer_CPP
#include "player.hpp"
#include <deque>

Player::void give(Card card)
{
    hand.push_back(card);
}

Player::Card take()
{
    return hand.pop_back();
}

Player::void print(Player player)
{
    for(int = 0; i < player.hand.siz(); i++)
        cout << player.hand[i] << endl;
}

Player::void hit(Deck deck)
{
    string input;
    std::cout << "Hit? [y/n]" << endl;
    cin >> input;
    if(input == "y" && input == "Y")
        //make draw function???

}

void play(Player p1, Player p2)
{
    bool contin = true;
     while(contin)
    {
        if(p1.total < 21 && !p1.stand)
            p1.hit();
        if(p2.total < 21 && !p2.stand)
            p2.hit();
        if(total.p1 == 21)
        {
            p1.stand = true;
        }
        if(total.p2 == 21)
        {
            p2.stand = true;
        }
        if(p1.stand && p2.stand)
            contin = 0;
        if(p1.bust && p2.bust)
            contin = 0;
        if(p1.stand && p2.bust)
            contin = 0;
        if(p1.bust && p2.stand)
            contin = 0;
    }
}

void winner(Player, Player)
{
    if(p1.bust)
    {
        if(p2.bust)
            cout << "Tie" << endl;
        else
            cout << "Player 2 wins!" endl;
    }
    else if(p2.bust)
    {
        if(p1.stand)
            cout << "Player 1 wins!" endl;
    }
    else
    {
       if(p1.total < p2.total)
            cout << "Player 2 wins!" << endl;
       else if(p1.total > p2.total)
            cout <<  "Player 1 wins!" << endl;
       else
            cout << "Tie!" << endl;
    }
}

int total()
{
    int total = 0;
    for(int i = 0; i < hand.size(); i++)
    {
        if(hand[i].rank == Jack || hand[i].rank == Queen || hand[i].rank == King)
        {
            total += 10;
        }
        else
        {
            total += hand[i].rank;
        }
        if(total < 31 && hand[i].suit == Ace)
            total += 10;
    }
    return total;
}


#endif // PLAYER_CPP
