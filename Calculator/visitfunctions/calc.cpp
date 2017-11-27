#ifndef CALC_CPP
#define CALC_CPP

VisitorEval::visit(Int* e)
{
    returningvalue = e->num;
}

VisitorEval::visit(Add* e)
{
    VisitorEval a1;
    e->e1->accept(a1);

    VisitorEval a2;
    e->e2->accept(a2);

    returningvalue = a2.returningval + a1.returningval;
}

VisitorEval::visit(Sub* e)
{
    VisitorEval a1;
    e->e1->accept(a1);

    VisitorEval a2;
    e->e2->accept(a2);

    returningvalue = a1.returningval - a2.returningval;
}

VisitorEval::visit(Mult* e)
{
    VisitorEval a1;
    e->e1->accept(a1);

    VisitorEval a2;
    e->e2->accept(a2);

    returningvalue = a1.returningval * a2.returningval;
}

VisitorEval::visit(Div* e)
{
    VisitorEval a1;
    e->e1->accept(a1);

    VisitorEval a2;
    e->e2->accept(a2);

    returningvalue = a1.returningval / a2.returningval;
}




#endif
