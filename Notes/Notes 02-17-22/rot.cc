// Class Notes 03-29-22 - Ben Serrano
// 1. The copy constructor (which takes a const reference from an existing object, use the object to create/instantiate a new object).
// 2. The copy assignment operator (op =. It uses an existing object and assigns its value to another object). This operator is a member function.
// 3. The destructor (it will be called automatically when the object is deleted or at the end of lifetime of the object.)
// 4. Move constructor
// 5. Move assignment operator

#include <iostream>

class RoT
{
public:
    int _capacity = 0;
    int *_pa = nullptr;

    // RoT() = delete;        // You may prohibit the default constructor from compiler.

    // RoT() = default;        // Ask compiler to generate the default ctor

    RoT()
        : _capacity(10), _pa(new int[_capacity])
    {
        for (int i = 0; i < _capacity; i++)
        {
            _pa[i] = 10 * i + 5;
        }
    }


    RoT(int cap, int *pa)
        : _capacity{cap}, _pa{pa} {}

    RoT(const RoT& from)
        : _capacity(from._capacity), _pa(new int[_capacity])
    {
        // Doing a memberwise copying in order to prevent an error where the pointer _pa is deleted twice
        for (int i = 0; i < _capacity; i++)
        {
            _pa[i] = from._pa[i];
        }
    }

    void print() const
    {
        std::cout << "Cap: " << _capacity << std::endl;
        std::cout << "Addr: " << _pa << std::endl;
    }
    
    // If no default dtor made then compiler will provide one
    ~RoT() { delete[] _pa; }

    RoT& operator=(const RoT& that)
    {
        if (this != &that)
        {
            int tempCap = that._capacity;
            int* tempPa = new int[tempCap];
            for (int i = 0; i < tempCap; i++)
            {
                tempPa[i] = that._pa[i];
            }

            delete[] _pa;
            _pa = tempPa;
            _capacity = tempCap;
        }
        return *this;
    }
};

int main()
{
    // while (true)
    // {
    //     // If run without destructor it will crash computer
    //     RoT r;
    //     std::cout << r._capacity << " " << r._pa << std::endl;
    //     // Never call destructor otherwise errors could happen
    // }

    RoT r1;
    RoT r2(r1);

    r1._pa[0] *= 10;
    r2._pa[9] = 999;

    std::cout << "Default Constructor" << std::endl;
    r1.print();
    for (int i = 0; i < r1._capacity; i++)
    {
        std::cout << r1._pa[i] << " ";
    }
    std::cout << std::endl;

    std::cout << std::endl << "Copy Constructor" << std::endl;
    r2.print();
    for (int i = 0; i < r2._capacity; i++)
    {
        std::cout << r2._pa[i] << " ";
    }
    std::cout << std::endl;

    // Calling copy = operator
    r2 = r1;
    std::cout << std::endl <<  "Copy-Assignment Constructor" << std::endl;
    r2.print();
    for (int i = 0; i < r2._capacity; i++)
    {
        std::cout << r2._pa[i] << " ";
    }
    std::cout << std::endl;
}