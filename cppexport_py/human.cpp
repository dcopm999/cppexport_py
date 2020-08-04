#include "human.h"

Human::Human(){
  this->name = "";
}

string Human::get_name()
{
  return this->name;
}

void Human::set_name(string name)
{
  this->name = name;
}

string Human::repr()
{
  return "<class Human: name='" + this->name + "'>";
}

string Human::str()
{
  return this->name;
}
