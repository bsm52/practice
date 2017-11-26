//Brandon Meier 3108150
//This is utilizing the virtual function method.

#include <iostream>
#include "calc.hpp"
using namespace std;

int main()
{

    //3 * 4
    Expr* e = new Mul(
              new Int(3),
              new Mul( new Int(3) , new Int(3))
                      );

    cout << e->evaluate() ;
}
