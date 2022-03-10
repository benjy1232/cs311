// This is still missing all the actual parts to rule of three
#include <iostream>

class RoT
{
  private:
    int _capacity;
    int *_pa;

  public:
    void print() const
    {
        std::cout << "Cap: " << _capacity << std::endl;
        std::cout << "Addr: " << _pa << std::endl;
    }

    RoT() = default;

    RoT(int cap, int *pa) : _capacity(cap), _pa(pa)
    {
    }
};

int main()
{
    RoT r;
    r.print();
}