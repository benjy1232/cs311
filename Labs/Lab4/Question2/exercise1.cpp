#include <iostream>
using namespace std;

// add class definitions below this line
class Fruit
{
  private:
    string _name;
    string _color;

  public:
    Fruit(string name, string color) : _name(name), _color(color)
    {
    }
    // Getters
    string GetName() const
    {
        return _name;
    }
    string GetColor() const
    {
        return _color;
    }
    // Setters
    void SetName(string s)
    {
        _name = s;
    }
    void SetColor(string s)
    {
        _color = s;
    }
};
// add class definitions above this line

int main()
{

    // DO NOT EDIT CODE BELOW THIS LINE

    Fruit fruit("apple", "red");
    cout << fruit.GetName() << endl;
    cout << fruit.GetColor() << endl;
    fruit.SetName("orange");
    fruit.SetColor("orange");
    cout << fruit.GetName() << endl;
    cout << fruit.GetColor() << endl;

    // DO NOT EDIT CODE ABOVE THIS LINE

    return 0;
}
