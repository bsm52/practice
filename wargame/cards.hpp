#include <utility>

//Ranks of a card are:
//1-13

//Suits of a card are:
//hearts, diamonds , clubs, spades
//using Card = int[2]; // a type is a Card which includes two ints

//using Card = std::pair<int, int>;

enum Rank // An enumeration type
{
    Ace,  // An enumerator
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
    King,
};

enum Suit
{
    Hearts,
    Diamonds,
    Clubs,
    Spades,
};

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

  Rank get_rank() const { return rank;}
  Suit get_suit() const { return suit;}

};


//how to use Cmake
//set(CMAKE_CXX_FLAGS "-std=c++14")

//add_executable(war
   // main.cpp
    //card.cpp)
