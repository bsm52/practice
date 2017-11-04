#ifndef JSON_CPP
#define JSON_CPP
#include "JSON.hpp"
#include <iostream>
#include <string>

Bool* parse_true(const *char first, const *char last)
{
  auto q = "true";
  while (!(first == last) && *q != '\0' && *first == *q) {
    ++first;
    ++q;
  }
  if (*q != '\0')
    throw std::runtime_error("invalid literal");
  return true;

}

Bool* parse_false(const *char first, const *char last)
{
  auto q = "false";
  while (!(first == last) && *q != '\0' && *first == *q) {
    ++first;
    ++q;
  }
  if (*q != '\0')
    throw std::runtime_error("invalid literal");
  return true;

}

Null* parse_null(const char* first, const char* last)
{
    auto q = "null";
  while (!(first == last) && *q != '\0' && *first == *q) {
    ++first;
    ++q;
  }
  if (*q != '\0')
    throw std::runtime_error("invalid literal");
  return new Null();

}

Value* parse_value(const char* first, const char* last)
{
    if (if first == last)
        return nullptr;
    if(*first == 't')
        return parse_true(first, last);
    else if(*first == 'f')
        return parse_false(first, last);
    else if(*first == 'n')
        return parse_null(first, last);
    else if(*first == '"')
        return parse_string(first, last);
    else if(*first == '[')
        return parse_array(first, last);
    else if (*first == '{')
        return parse_object(first, last);
    switch(*first){
    case '0' : case '1' : case '2' : case '3' : case '4' : case '5' : case '6' :
    case '7' : case '8' : case '9' : case '-':
        return parse_number(first, last);
    default:
        throw std::runtime_error("invalid error");
    }
}


Value* parse(const std::string& str)
{
   const char* first = str.c_str();
   const char* last = first + str.size();
   Value* parsed = parse_value(first, last);
   return parsed;
}


#endif // JSON_CPP
