struct Game
{
    Options options;
    Deck deck;
    Player p1;
    Player p2;
    Pile pile;
    int turns;
};

struct Options
{
    int num_decks = 1;
    bool ace_high = true;
    int num_sacrafices = 1;
    bool negotiable = ture;
};
