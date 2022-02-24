#include "Product.h"
#include <iostream>
#include <string>

using namespace std;

Product::Product(string nam, double pri, int num) : code(nam), price(pri), count(num)
{
}
void Product::SetCode(string _code)
{
    code = _code;
}
string Product::GetCode()
{
    return code;
}
void Product::SetPrice(double _price)
{
    price = _price;
}
double Product::GetPrice()
{
    return price;
}
void Product::SetCount(int num)
{
    count = num;
}
int Product::GetCount()
{
    return count;
}
void Product::AddInventory(int stock)
{
    count += stock;
}
void Product::SellInventory(int sold)
{
    count -= sold;
}
