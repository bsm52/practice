#include <iostream>
#include "deck.hpp"
using namespace std;


int main()
{
    Suited card(1, Two, Hearts);
    Deck deck = make_std_deck();
    cout << deck[1]->id << endl;
    cout << "Hello world!" << endl;
    return 0;
}
