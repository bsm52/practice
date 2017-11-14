#ifndef CALC_HPP
#define CALC_HPP

struct Expr;
struct Int;
struct Add;
struct Sub;
struct Mul;
struct Div;

struct Expr
{
    virtual ~Expr() = default;
    virtual int evaluate() const = 0;
};


struct Int : Expr
{
    int val;
    Int(int a) : val(a)
    {}

    int evaluate() const override{
    return val;
    }
};

struct Binary : Expr
{
    Expr* e1;
    Expr* e2;

    Binary(Expr *e1, Expr *e2): e1(e1), e2(e2)
    {}
};

struct Add : Binary
{
    using Binary::Binary;

    int evaluate() const override
    {
        return e1->evaluate() + e2->evaluate();
    }
};

struct Sub : Binary
{
    using Binary::Binary;

    int evaluate() const override
    {
        return e1->evaluate() - e2->evaluate();
    }
};

struct Mul : Binary
{
    using Binary::Binary;

    int evaluate() const override
    {
        return e1->evaluate() * e2->evaluate();
    }
};

struct Div : Binary
{
    using Binary::Binary;

    int evaluate() const override
    {
        return e1->evaluate() / e2->evaluate();
    }
};



#endif // CALC_HPP
