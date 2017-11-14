#include <iostream>
#include "calc.hpp"
using namespace std;

int main()
{

    //3 * 4
    Expr* e = new Mul(
              new Int(3),
              new Int(4)
                      );

    cout << e->evaluate() ;
}
