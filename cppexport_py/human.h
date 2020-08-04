#include <iostream>
#include <string>
using namespace std;

  
class Human
{
 private:
  string name;

 public:
  Human();
  Human(string name): name(name){};
  string get_name();
  void set_name(string name);
  string repr();
  string str();
};
