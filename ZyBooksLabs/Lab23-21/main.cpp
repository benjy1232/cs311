#include <iostream>
#include <vector>
using namespace std;

// This method reverses contents of input argument vect.
vector<char> Reverse(vector<char> vect)
{
    vector<char> ret;
    for (int i = vect.size() - 1; i >= 0; i--)
    {
        ret.push_back(vect[i]);
    }
    return ret;
}

int main()
{
    vector<char> ch(3);
    ch.at(0) = 'a';
    ch.at(1) = 'b';
    ch.at(2) = 'c';

    vector<char> reverseVect = Reverse(ch);

    for (size_t i = 0; i < reverseVect.size(); ++i)
    {
        cout << reverseVect.at(i);
    }

    return 0;
}
