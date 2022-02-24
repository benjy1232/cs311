#include <cstdlib>
#include <iostream>
using namespace std;

string CoinFlip()
{
    if (rand() % 2)
    {
        return "Heads";
    }
    return "Tails";
}

int main()
{
    int numTimes;
    cin >> numTimes;
    // Add more variables as needed

    srand(2); // Unique seed

    for (int i = 0; i < numTimes; i++)
    {
        cout << CoinFlip() << endl;
    }

    return 0;
}
