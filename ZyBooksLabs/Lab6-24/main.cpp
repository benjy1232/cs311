#include <iostream>
#include <vector>
using namespace std;

void SortVector(vector<int> &myVec)
{
    if (myVec.size() < 2)
    {
        return;
    }
    if (myVec.size() == 2)
    {
        if (myVec[0] < myVec[1])
        {
            int temp = myVec[0];
            myVec[0] = myVec[1];
            myVec[1] = temp;
        }
    }
    int randVal = rand() % myVec.size();
    int chosenVal = myVec[randVal];
    vector<int> lowerHalf;
    vector<int> upperHalf;
    for (unsigned int i = 0; i < myVec.size(); i++)
    {
        if (myVec[i] < chosenVal)
        {
            lowerHalf.push_back(myVec[i]);
        }
        else if (myVec[i] >= chosenVal)
        {
            upperHalf.push_back(myVec[i]);
        }
    }
    SortVector(lowerHalf);
    SortVector(upperHalf);
    for (unsigned int i = 0; i < lowerHalf.size(); i++)
    {
        upperHalf.push_back(lowerHalf[i]);
    }
    for (unsigned int i = 0; i < myVec.size(); i++)
    {
        myVec[i] = upperHalf[i];
    }
}

int main()
{
    vector<int> vec;
    int numElements;
    cin >> numElements;
    for (int i = 0; i < numElements; i++)
    {
        int temp;
        cin >> temp;
        vec.push_back(temp);
    }
    SortVector(vec);
    for (unsigned int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << ",";
    }
    cout << endl;
    return 0;
}
