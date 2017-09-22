//Brandon Meier 3108150
#include <iostream>
#include <time.h> // used in the prng.seed
#include "game.hpp"

int main()
{

    /*
    extern prng.seed(time(0));
    constexpr int runs = 10000;
    int total = 0;
    for (int i = 0; i < runs ; ++i)
    {
        Game g;
        total += g.play();
    }
    cout << double(total) / double(runs) << endl;
    */

    if(p1.empty()){
        if(p2.empty())
            cout << "Tie\n";
        else
            cout << "Player 2 Wins!\n";
        break;
    }
    else if(p2.empty()){
        cout << "Player 1 Wins\n";
        break;
    }

    Deck deck; //game deck unsure how many cards
    deck.shuffle();

    Player p1;
    Player p2;

    //split the deck
    deal(deck, p1, deck.size() / 2);
    deal(deck, p2, deck.size() / 2);

    while (!deck.empty()) {
        deal_one(deck, p1);
        deal_one(deck, p2);
    }

    Pile spoils;

    while (true) {

        Card c1 = p1.take();
        Card c2 = p2.take();

        spoils.add(c1);
        spoils.add(c2);

        if (c1 > c2){
            p1.give(c1);
            p1.give(c2);
        }
        else if ( c2 > c1) {
            p2.give(c2);
            p2.give(c1);
        }
        else{
            //War
            spoils.add(p1.take());
            spoils.add(p2.take());
            continue;
        }



    }




    return 0;
}
