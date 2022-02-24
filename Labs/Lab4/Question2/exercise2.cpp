#include <iostream>
using namespace std;

// add class definitions below this line
class Watch
{
  private:
    string _manufacturer;
    string _model;
    int _diameter;
    int _waterResistance;
    string _material;

  public:
    Watch(string manufacturer, string model, int diameter, int water, string material)
        : _manufacturer(manufacturer), _model(model), _diameter(diameter), _waterResistance(water), _material(material)
    {
    }
    // Getters
    string GetManufacturer() const
    {
        return _manufacturer;
    }
    string GetModel() const
    {
        return _model;
    }
    int GetDiameter() const
    {
        return _diameter;
    }
    int GetWaterResistance() const
    {
        return _waterResistance;
    }
    string GetMaterial() const
    {
        return _material;
    }
    // Setters
    void SetManufacturer(string s)
    {
        _manufacturer = s;
    }
    void SetModel(string s)
    {
        _model = s;
    }
    void SetDiameter(int s)
    {
        _diameter = s;
    }
    void SetWaterResistance(int s)
    {
        _waterResistance = s;
    }
    void SetMaterial(string s)
    {
        _material = s;
    }

    void Summary()
    {
        cout << "Manufacturer: " << _manufacturer << endl;
        cout << "Model: " << _model << endl;
        cout << "Diameter: " << _diameter << " mm" << endl;
        cout << "Water Resistance: " << _waterResistance << " m" << endl;
        cout << "Material: " << _material << endl;
    }
};

// add class definitions above this line

int main()
{

    // DO NOT EDIT CODE BELOW THIS LINE

    Watch my_watch("Omega", "Speedmaster", 42, 50, "steel");
    cout << my_watch.GetManufacturer() << endl;
    cout << my_watch.GetModel() << endl;
    cout << my_watch.GetDiameter() << endl;
    cout << my_watch.GetWaterResistance() << endl;
    cout << my_watch.GetMaterial() << endl;
    my_watch.SetManufacturer("Rolex");
    my_watch.SetModel("Explorer");
    my_watch.SetDiameter(36);
    my_watch.SetWaterResistance(60);
    my_watch.SetMaterial("gold");
    my_watch.Summary();

    // DO NOT EDIT CODE ABOVE THIS LINE

    return 0;
}
