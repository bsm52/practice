#ifndef CARD_CPP
#define CARD_CPP
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

enum Color
{
    Red,
    Black,
};


struct Card
{
    int id; //Each card will get its own id number in case that is needed

    Card(int id) : id(id)
    {}
};

struct Suited : Card
{
    Rank rank;
    Suit suit;

    Suited(int id, Rank r, Suit s)
    : Card(id), rank(r), suit(s)
  { }
};

struct Joker : Card
{
    Color color;

    Joker(int id, Color c) : Card(id), color(c)
    {}
};
#endif // CARD_CPP
