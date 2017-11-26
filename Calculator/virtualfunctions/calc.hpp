#ifndef CALC_HPP
#define CALC_HPP

#include <iostream>

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
    virtual *Expr clone() const = 0; //will be used as our constructor
    virtual void print (std::ostream &os) = 0;
};


struct Int : Expr
{
    int val;
    Int(int a) : val(a)
    {}

    int evaluate() const override{
    return val;
    }

    Int* clone() const override //Int constructor
    {
        return new Int(*this);
    }
    void print(std::ostream &os) const override
    {
        os << val;
    }
};

struct Binary : Expr
{
    Expr* e1;
    Expr* e2;

    Binary(Expr *e1, Expr *e2): e1(e1), e2(e2)
    {}

    Binary(const Binary& t) : e1(t.e1->clone()), e2(t.e2->clone())
    {}

    ~Binary() override
    {
        delete e1;
        delete e2;
    }

    void print(std::ostream& os) const override;
};

struct Add : Binary
{
    using Binary::Binary;

    Add* clone() const override
    {
        return new Add(*this);
    }

    int evaluate() const override
    {
        return e1->evaluate() + e2->evaluate();
    }

    void print(std::ostream& os) const override
    {
    os << '(';
    e1->print << ')'
    os << " + ";
    os << '(' << e2-print() << ')';
    }

};

struct Sub : Binary
{
    using Binary::Binary;

    Sub* clone() const override
    {
        return new Sub(*this);
    }

    int evaluate() const override
    {
        return e1->evaluate() - e2->evaluate();
    }

    void print(std::ostream& os) const override
    {
    os << '(';
    e1->print << ')'
    os << " - ";
    os << '(' << e2-print() << ')';
    }
};

struct Mul : Binary
{
    using Binary::Binary;

    Mul* clone() const override
    {
        return new Mul(*this);
    }

    int evaluate() const override
    {
        return e1->evaluate() * e2->evaluate();
    }

    void print(std::ostream& os) const override
    {
    os << '(';
    e1->print << ')'
    os << " * ";
    os << '(' << e2-print() << ')';
    }
};

struct Div : Binary
{
    using Binary::Binary;

    Div* clone() const override
    {
        return new Div(*this);
    }

    int evaluate() const override
    {
        return e1->evaluate() / e2->evaluate();
    }

    void print(std::ostream& os) const override
    {
    os << '(';
    e1->print << ')'
    os << " / ";
    os << '(' << e2-print() << ')';
    }
};



#endif // CALC_HPP
