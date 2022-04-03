#ifndef CLASS_H
#define CLASS_H
#include <iostream>
using namespace std;

//add class definitions below this line

class Greeting {
  public:
    Greeting(string g) {
      greeting = g;
    }
  
    string GetGreeting() {
      return greeting;
    }
  
    void SetGreeting(string new_greeting) {
      greeting = new_greeting;
    }
  
    void PrintGreeting(){
      cout << GetGreeting() << endl;
    }
  
  private:
    string greeting;
};

class Farewell {
  public:
    Farewell(string f) {
      farewell = f;
    }
  
    string GetFarewell() {
      return farewell;
    }
  
    void SetFarewell(string new_farewell) {
      farewell = new_farewell;
    }
  
    void PrintGreeting(){
      cout << GetFarewell() << endl;
    }
  
  private:
    string farewell;
};
//add class definitions above this line

#endif
