#include <iostream>
#include <vector>

#include "kata.h"

using namespace std;

int main(int argc, char *argv[])
{
    vector<int> array = {1, 2, 3, 4, 5};
    Kata kata;
    vector<int> retArray = kata.foldArray(array, 1);
    for (size_t i = 0; i < retArray.size(); ++i)
    {
        cout << retArray[i] <<" ";
    }
    return 0;
}
