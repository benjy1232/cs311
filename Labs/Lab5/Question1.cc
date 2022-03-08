// TODO:
// description: Lab 5
// name: Ben Serrano
// date: 03-01-2022

#include <iostream>
#include <string>

// TODO: implement the class
class Date
{
  private:
    int _day;
    int _month;
    int _year;
    void setDefaults();
    bool isValidDate();

  public:
    Date();
    Date(int, int, int);
    // Getters
    int getDay();
    int getMonth();
    int getYear();
    // Setters
    void setDay(int day);
    void setMonth(int month);
    void setYear(int year);

    void print();
};

bool Date::isValidDate()
{
    if (_day > 31 || _month > 12 || _day < 1)
    {
        setDefaults();
        return false;
    }
    if (_year % 400 == 0)
    {
        if (_day > 29 && _month == 2)
        {
            setDefaults();
            return false;
        }
    }
    else if (_year % 100 == 0)
    {
        if (_day > 28 && _month == 2)
        {
            setDefaults();
            return false;
        }
    }
    else if (_year % 4 == 0)
    {
        if (_day > 29 && _month == 2)
        {
            setDefaults();
            return false;
        }
    }
    else
    {
        if (_day > 28 && _month == 2)
        {
            setDefaults();
            return false;
        }
    }
    switch (_month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        if (_day > 31)
        {
            setDefaults();
            return false;
        }
    default:
        if (_day > 30)
        {
            setDefaults();
            return false;
        }
    }
    return true;
}

Date::Date()
{
    setDefaults();
}

Date::Date(int YYYY, int MM, int DD) : _year(YYYY), _month(MM), _day(DD)
{
    isValidDate();
}

void Date::setDefaults()
{
    _day = 1;
    _month = 1;
    _year = 1970;
}

void Date::print()
{
    std::cout << _year << "-";
    if (_month < 10)
    {
        std::cout << "0" << _month;
    }
    else
    {
        std::cout << _month;
    }

    std::cout << "-";

    if (_day < 10)
    {
        std::cout << "0" << _day;
    }
    else
    {
      std::cout << _day;
    }
    std::cout << std::endl;
}

void Date::setDay(int DD)
{
    _day = DD;
    isValidDate();
}

void Date::setMonth(int MM)
{
    _month = MM;
    isValidDate();
}

void Date::setYear(int YYYY)
{
    _year = YYYY;
    isValidDate();
}

int main()
{
    Date d1;
    Date d2{2022, 2, 28};
    Date d3{2022, 2, 29};

    // step1: test following code snippet
    // expected output:
    // 1970-01-01
    // 2022-02-28
    // 1970-01-01
    d1.print();
    d2.print();
    d3.print();

    // step1: test following code snippet
    // expected output
    // 2022-02-28
    // 2022-03-20
    d2.setDay(28);
    Date d4{2022, 3, 12}; // yay! spring break
    d4.setDay(20);        // spring break is alway fast
    d2.print();
    d4.print();
}
