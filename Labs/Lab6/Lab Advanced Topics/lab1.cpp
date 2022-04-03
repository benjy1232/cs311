#include "class.h"

int main() {
  
    //add code below this line

	Greeting g("Hello world");

	cout << g.GetGreeting() << endl;
	g.SetGreeting("Hi world");
	cout << g.GetGreeting() << endl;

	Farewell f("Goodbye world");
	cout << f.GetFarewell() << endl;
	f.SetFarewell("Bye world");
	cout << f.GetFarewell() << endl;

    //add code above this line
  
  return 0;
  
}
