#include <iostream>
#include <vector>
using namespace std;

// add class definitions below this line
class Words
{
  public:
    Words(vector<string> &wordList) : _listOfWords(wordList)
    {
    }
    void CoutStrings()
    {
        vector<int> numVowels = countVowels();
        for (int i = 0; i < numVowels.size(); i++)
        {
            if (i != numVowels.size() - 1)
            {
                cout << numVowels[i] << ",";
            }
            else
            {
                cout << numVowels[i];
            }
        }
        cout << endl;
    }

  private:
    vector<string> _listOfWords;
    vector<char> _vowels = {'a', 'e', 'i', 'o', 'u'};
    vector<int> countVowels()
    {
        vector<int> ret;
        for (string word : _listOfWords)
        {
            int count = 0;
            for (int i = 0; i < word.size(); i++)
            {
                bool isVowel = false;
                for (char vowel : _vowels)
                {
                    if (vowel == word[i])
                    {
                        isVowel = true;
                    }
                }
                if (!isVowel)
                {
                    count++;
                }
            }
            ret.push_back(count);
        }
        return ret;
    }
};

// add class definitions above this line

int main()
{

    // add code below this line

    vector<string> list = {"house", "cake", "pancake"};
    Words vowels(list);
    vowels.CoutStrings();

    // add code above this line

    return 0;
}
