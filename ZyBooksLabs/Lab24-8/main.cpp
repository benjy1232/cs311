#include "SimpleCar.h"

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    SimpleCar carro;
    int milesForward, milesBackward;
    cin >> milesForward >> milesBackward;
    carro.Drive(milesForward);
    carro.Reverse(milesBackward);
    carro.HonkHorn();
    carro.Report();
    return 0;
}
