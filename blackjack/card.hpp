#ifndef CARD_HPP
#define CARD_HPP
#include <utility>
#include <iostream>

//Ranks of a card are:
//1-13
//

//Suits of a card are:
//hearts, diamonds , clubs, spades

enum Rank // An enumeration type
{
    Ace = 1,
    Two,
    Three,
    Four,
    Five,
    Six,
    Seven,
    Eight,
    Nine,
    Ten,
    Jack,
    Queen,
    King, // An enumerator
};

enum Suit
{
    Hearts,
    Diamonds,
    Clubs,
    Spades,
};


//Card Class
class Card
{
private:
  Rank rank;
  Suit suit;
public:
    Card() = default;

    //Construct a card with a rank and suit
  Card(Rank r, Suit s)
    :rank(r), suit(s) //member initializer list
  {}

  //copy constructor
  Card (const Card& c)
  : rank(c.rank), suit(c.suit)
  {}

  // Copy assignment operator
  Card& operator=(const Card& c)
  {
      rank = c.rank;
      suit = c.suit;
      return *this;
  }
    //accessor function
  Rank get_rank() const { return rank;}
  Suit get_suit() const { return suit;}
    //mutator functions
  //void set_rank(Rank r) { rank = r;}
  //void set_suit(Suit s) { suit = s;}

};

std::ostream& operator<<(std::ostream& os, Rank r)
{
    switch (r){
    case Ace:
        os << 'A';
            break;
    case Two:
        os << '2';
            break;
    case Three:
        os << '3';
            break;
    case Four:
        os << '4';
            break;
    case Five:
        os << '5';
            break;
    case Six:
        os << '6';
            break;
    case Seven:
        os << '7';
            break;
    case Eight:
        os << '8';
            break;
    case Nine:
        os << '9';
            break;
    case Ten:
        os << 'T';
            break;
    case Jack:
        os << 'J';
            break;
    case Queen:
        os << 'Q';
            break;
    case King:
        os << 'K';
            break;

        return os;
    }
}
  std::ostream& operator <<(std::ostream& os, Suit s)
  {
    switch (s) {
        case Hearts:
            os << 'H';
            break;
        case Diamonds:
            os << 'D';
            break;
        case Clubs:
            os << 'C';
            break;
        case Spades:
            os << 'S';
            break;
      }
      return os;
  }

  bool operator==(Card a, Card b)
  {
      return a.get_rank() == b.get_rank() && a.get_suit() == b.get_suit();
  }
  bool operator!=(Card a, Card b)
  {
      return !(a == b);
  }

  //ordering
  bool operator <(Card a, Card b)
  {
      /*
      if (a.get_suit() < b.get_suit())
        return true;
      if (b.get_suit() < a.get_suit())
        return false;
        */
      return a.get_rank() < b.get_rank();
  }
  bool operator >(Card a, Card b)
  {
      return a.get_rank() > b.get_rank();
  }
  /*
  bool operator <=(Card a, Card b){}
  bool operator >=(Card a, Card b){}
  */
#endif // CARD_HPP
