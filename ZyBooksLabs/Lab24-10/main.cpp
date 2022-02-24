#include <iomanip>
#include <iostream>
#include <vector>

#include "Product.h"
using namespace std;

int main()
{

    string name = "Apple";
    double price = 0.40;
    int num = 3;

    Product p = Product(name, price, num);

    cout << fixed << setprecision(2);

    // Test 1 - Are instance variables set/returned properly?
    cout << "Name: " << p.GetCode() << endl;           // Should be 'Apple'
    cout << "Price: " << p.GetPrice() << endl;         // Should be '0.40'
    cout << "Count: " << p.GetCount() << endl << endl; // Should be 3

    // Test 2 - Are instance variables set/returned properly after adding and selling?
    num = 10;
    p.AddInventory(num);
    num = 5;
    p.SellInventory(num);
    cout << "Name: " << p.GetCode() << endl;           // Should be 'Apple'
    cout << "Price: " << p.GetPrice() << endl;         // Should be '0.40'
    cout << "Count: " << p.GetCount() << endl << endl; // Should be 8

    // Test 3 - Do setters work properly?
    name = "Golden Delicious";
    p.SetCode(name);
    price = 0.55;
    p.SetPrice(price);
    num = 4;
    p.SetCount(num);
    cout << "Name: " << p.GetCode() << endl;   // Should be 'Golden Delicious'
    cout << "Price: " << p.GetPrice() << endl; // Should be '0.55'
    cout << "Count: " << p.GetCount() << endl; // Should be 4

    return 0;
}
