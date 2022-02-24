#ifndef PRODUCT_H_
#define PRODUCT_H_

#include <iostream>
using namespace std;

class Product
{
  public:
    Product(string, double, int);
    void SetCode(string);
    string GetCode();
    void SetPrice(double);
    double GetPrice();
    void SetCount(int);
    int GetCount();
    void AddInventory(int);
    void SellInventory(int);

  private:
    string code;
    double price;
    int count;
};

#endif /* PRODUCT_H_ */
