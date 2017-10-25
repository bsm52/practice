#ifndef DECK_CPP
#define DECK_CPP

#include "deck.hpp"



Deck make_std_deck()
{
    Deck d;

    Suited c1{1, Ace, Spades};
    Suited c2{2, Two, Spades};
    Suited c3{3, Three, Spades};
    Suited c4{4, Four, Spades};
    Suited c5{5, Five, Spades};
    Suited c6{6, Six, Spades};
    Suited c7{7, Seven, Spades};
    Suited c8{8, Eight, Spades};
    Suited c9{9, Nine, Spades};
    Suited c10{10, Ten, Spades};
    Suited c11{11, Jack, Spades};
    Suited c12{12, Queen, Spades};
    Suited c13{13, King, Spades};

    Suited c14{14, Ace, Clubs};
    Suited c15{15, Two, Clubs};
    Suited c16{16, Three, Clubs};
    Suited c17{17, Four, Clubs};
    Suited c18{18, Five, Clubs};
    Suited c19{19, Six, Clubs};
    Suited c20{20, Seven, Clubs};
    Suited c21{21, Eight, Clubs};
    Suited c22{22, Nine, Clubs};
    Suited c23{23, Ten, Clubs};
    Suited c24{24, Jack, Clubs};
    Suited c25{25, Queen, Clubs};
    Suited c26{26, King, Clubs};

    Suited c27{27, Ace, Hearts};
    Suited c28{28, Two, Hearts};
    Suited c29{29, Three, Hearts};
    Suited c30{30, Four, Hearts};
    Suited c31{31, Five, Hearts};
    Suited c32{32, Six, Hearts};
    Suited c33{33, Seven, Hearts};
    Suited c34{34, Eight, Hearts};
    Suited c35{35, Nine, Hearts};
    Suited c36{36, Ten, Hearts};
    Suited c37{37, Jack, Hearts};
    Suited c38{38, Queen, Hearts};
    Suited c39{39, King, Hearts};

    Suited c40{40, Ace, Diamonds};
    Suited c41{41, Two, Diamonds};
    Suited c42{42, Three, Diamonds};
    Suited c43{43, Four, Diamonds};
    Suited c44{44, Five, Diamonds};
    Suited c45{45, Six, Diamonds};
    Suited c46{46, Seven, Diamonds};
    Suited c47{47, Eight, Diamonds};
    Suited c48{48, Nine, Diamonds};
    Suited c49{49, Ten, Diamonds};
    Suited c50{50, Jack, Diamonds};
    Suited c51{51, Queen, Diamonds};
    Suited c52{52, King, Diamonds};

    d.push_back(&c1);
    d.push_back(&c2);
    d.push_back(&c3);
    d.push_back(&c4);
    d.push_back(&c5);
    d.push_back(&c6);
    d.push_back(&c7);
    d.push_back(&c8);
    d.push_back(&c9);
    d.push_back(&c10);
    d.push_back(&c11);
    d.push_back(&c12);
    d.push_back(&c13);
    d.push_back(&c14);
    d.push_back(&c15);
    d.push_back(&c16);
    d.push_back(&c17);
    d.push_back(&c18);
    d.push_back(&c19);
    d.push_back(&c20);
    d.push_back(&c21);
    d.push_back(&c22);
    d.push_back(&c23);
    d.push_back(&c24);
    d.push_back(&c25);
    d.push_back(&c26);
    d.push_back(&c27);
    d.push_back(&c28);
    d.push_back(&c29);
    d.push_back(&c30);
    d.push_back(&c31);
    d.push_back(&c32);
    d.push_back(&c33);
    d.push_back(&c34);
    d.push_back(&c35);
    d.push_back(&c36);
    d.push_back(&c37);
    d.push_back(&c38);
    d.push_back(&c39);
    d.push_back(&c40);
    d.push_back(&c41);
    d.push_back(&c42);
    d.push_back(&c43);
    d.push_back(&c44);
    d.push_back(&c45);
    d.push_back(&c46);
    d.push_back(&c47);
    d.push_back(&c48);
    d.push_back(&c49);
    d.push_back(&c50);
    d.push_back(&c51);
    d.push_back(&c52);

    Joker j1(53, Black);
    Joker j2(54, Red);

    d.push_back(&j1);
    d.push_back(&j2);

  return d;

}



#endif // deck
