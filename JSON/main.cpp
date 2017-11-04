#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a = "Value" ;
    const char* first = a.c_str();
    const char* asd = std::next(first);
    const char* b = std::next(asd);
    const char* last = first + a.size();
    cout << *first << endl;
    cout << *asd << endl;
    cout << *b << endl;
    cout << *(last - 1) << endl;
}
