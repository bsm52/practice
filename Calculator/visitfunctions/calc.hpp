#ifndef CALC_HPP
#define CALC_HPP

struct Expr;
struct Int;
struct Add;
struct Sub;
struct Mult;
struct Div;

struct Expr
{
    virtual ~Expr() = default;

    virtual void accept(Visitor& v) = 0;

};

struct Visitor
{
    virtual void visit(Int *e) = 0;
    virtual void visit(Add *e) = 0;
    virtual void visit(Sub *e) = 0;
    virtual void visit(Mult *e) = 0;
    virtual void visit(Div *e) = 0;


};

struct VisitorEval : Visitor
{
    int returningval;

    void visit(Int *e) override;
    void visit(Add *e) override;
    void visit(Sub *e) override;
    void visit(Mult *e) override;
    void visit(Div *e) override;
};


struct Int : Expr
{
    int num;

    Int(int a) : num(a)
    {}

    void getvisit(Visitor& v)
    {
        v.visit(this);
    }
};

struct Binary : Expr
{
    Expr* e1;
    Expr* e2;

    Binary(Expr* e1, Expr* e2) : e1(e1), e2(e2)
    {}

    ~Binary override
    {
        delete e1;
        delete e2;
    }


};


struct Add : Binary
{
    using Binary::Binary;

    void getvisit(Visitor &v) override
    {
        v.visit(this);
    }
};

struct Sub : Binary
{
    using Binary::Binary;

    void getvisit(Visitor &v) override
    {
        v.visit(this);
    }
};

struct Mult : Binary
{
    using Binary::Binary;

    void getvisit(Visitor &v) override
    {
        v.visit(this);
    }
};

struct Div : Binary
{
    using Binary::Binary;

    void getvisit(Visitor &v) override
    {
        v.visit(this);
    }
};


#endif // CALC_HPP
