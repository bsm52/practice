#ifndef JSON_HPP
#define JSON_HPP
#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::string;

struct Value
{
   virtual ~Value() //destructor for the Value
   {}

   virtual void print() const = 0;
};

struct Bool : Value
{
    Bool(bool b) : val(b)
    {}

    print() const
    {
        if(val)
            cout << "true" << endl;
        else
            cout << "false" << endl;
    }
    bool val;
};

struct Number : Value
{
    Number(double number) :value(number)
    {}

     void print()const
     {
         cout << value;
     }

     double value;
};

struct String
{
    string val;

    void print() const{
        cout << val;
    }
};

struct Array : Value{

    Array(std::vector<Value*> list) : vals(list)
    {}

    std::vector<Value*> vals;

    ~Array()
    {
        for(Value * v : vals)
            delete v;
    }

    void print() const
    {
        cout << '[';
        for(auto itr = vals.begin(); itr != vals.end(); itr++){
            (*itr)->print();
            if(std::next(itr) != vals.end())
                std::cout << ", ";
        }
        std::cout << "]";
    }
};

struct Null : Value
{
    Null()
    {}

    void print() const {
       std::cout << "null";
    }
};


#endif // JSON_HPP
