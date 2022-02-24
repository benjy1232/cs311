#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int numWords;
    vector<string> words;
    char lookFor;
    cin >> numWords;
    for (int i = 0; i < numWords; i++)
    {
        string temp;
        cin >> temp;
        words.push_back(temp);
    }
    cin >> lookFor;
    for (int i = 0; i < numWords; i++)
    {
        for (int j = 0; j < words[i].size(); j++)
        {
            string temp = words[i];
            if (temp[j] == lookFor)
            {
                cout << temp << ",";
                break;
            }
        }
    }

    cout << endl;
    /* Type your code here. */

    return 0;
}
