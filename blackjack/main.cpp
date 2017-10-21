#include <iostream>
#include "deck.hpp"
#include "player.hpp"

using namespace std;

int main()
{
    Deck deck;
    shuffle(deck);

    Player p1; //add bust boolean
    Player p2;

    deal(deck, p1, 2); //deals 2 cards for the player
    deal(deck, p2, 2);

    cout << "Player 1's hand has ";
    p1.print(p1);
    cout << endl;
    cout << "Player 1's hand has ";
    p2.print(p2);
    cout << endl;

    //check and see if any of the players were dealt 21 right off the bat
    if(p1.total() == 21)
        cout << "Player 1 wins" << endl;
    if(p2.total() == 21)
        cout << "Player 2 wins" << endl;


    play(p1, p2);

    winner(p1, p2);

    return 0;
}
