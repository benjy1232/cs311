#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct freqOfWord
{
    string word;
    int freq;
};

int main(void)
{
    vector<freqOfWord> wordFrequency;
    int numWords;
    cin >> numWords;
    for (int i = 0; i < numWords; i++)
    {
        string word;
        cin >> word;
        struct freqOfWord temp;
        bool isInList = false;
        for (unsigned int j = 0; j < wordFrequency.size(); i++)
        {
            if (word == wordFrequency[j].word)
            {
                wordFrequency[j].freq++;
                temp = wordFrequency[j];
                isInList = true;
            }
        }

        temp.word = word;
        if (!isInList)
        {
            temp.freq = 1;
        }
        wordFrequency.push_back(temp);
    }

    for (int i = 0; i < wordFrequency.size(); i++)
    {
        cout << wordFrequency[i].word << " - " << wordFrequency[i].freq << endl;
    }
    return 0;
}
