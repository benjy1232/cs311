#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

// TODO: define BinaryNumber class here.
class BinaryNumber
{
  private:
    unsigned _num;

  public:
    BinaryNumber() : _num(0)
    {
    }

    BinaryNumber(unsigned num) : _num(num)
    {
    }

    std::string getBinary() const
    {
        unsigned num = _num;
        std::string binary = "";
        if (num == 0)
        {
            binary.append(std::to_string(0));
            return binary;
        }
        while (num)
        {
            binary.append(std::to_string(num % 2));
            num /= 2;
        }
        std::reverse(binary.begin(), binary.end());
        return binary;
    }

    friend ostream &operator<<(ostream &out, BinaryNumber bin);
    BinaryNumber operator*(BinaryNumber rhs);
};

std::ostream &operator<<(std::ostream &out, BinaryNumber bin)
{
    std::string binaryNum = bin.getBinary();
    out << binaryNum;
    return out;
}

BinaryNumber BinaryNumber::operator*(BinaryNumber rhs)
    {
        unsigned out = _num * rhs._num;
        BinaryNumber ret(out);
        return ret;
    }

void d2B(unsigned num)
{
    if (num == 0)
    {
        std::cout << 0 << std::endl;
        return;
    }
    std::string result = "";
    while (num)
    {
        result.append(std::to_string(num % 2));
        num /= 2;
    }
    std::reverse(result.begin(), result.end());
    std::cout << result << std::endl;
    // watermark: must keep this line here. Do not delete//
}

int main()
{
    BinaryNumber bn1;
    BinaryNumber bn2(4);
    BinaryNumber bn3(15);

    // expected output:
    // ---
    // 0
    // 100
    // 111100

    std::cout << bn1.getBinary() << std::endl;
    std::cout << bn2 << std::endl;
    std::cout << (bn2 * bn3) << std::endl;

    return 0;
}
