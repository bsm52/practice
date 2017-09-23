//Brandon Meier 3108150
#include <iostream>
#include "game.hpp"



using namespace std;


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


    Deck deck = make_standard_deck(); //game deck. Used to split amongst the players
    shuffle(deck);  //self explanatory
    printdeck(deck);

    cout << "we made it here" << endl;


    Player p1;
    Player p2;

    cout << "we made it here" << endl;

    //split the deck
    deal(deck, p1, deck.size() / 2);  //each player will fill his/her hand with cards from the deck
    deal(deck, p2, deck.size());
    printdeck(deck);

    cout << "we made it here" << endl;

    Pile spoils;

    bool contin = true;

    while (contin) {

        Card c1 = p1.take();
        Card c2 = p2.take();
        cout << "we made it here" << endl;


        spoils.add(c1);
        spoils.add(c2);

        cout << "we made it here" << endl;

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

        if(p1.empty()){
            if(p2.empty())
                cout << "Tie\n";
            else
                cout << "Player 2 Wins!\n";
            contin = false;
        }
        if(p2.empty()){
            cout << "Player 1 Wins\n";
            contin = false;
        }



    }




    return 0;
}
