#ifndef KATA_H
#define KATA_H

#include <vector>
#include <algorithm>
#include <iterator>


class Kata
{
public:
    Kata(){}
    ~Kata() {}
    std::vector<int> foldArray(std::vector<int> a, int runs)
    {
//        for (int i = 0; i < runs; ++i)
//        {
//            std::vector<int> nArray;
//            int size = array.size();
//            if (size == 1)
//              return array;

//            for (int j = 0; j < size / 2; ++j)
//                    nArray.push_back(array[j] + array[size-j-1]);

//            if(size % 2 != 0)
//            {
//              nArray.push_back(array[size/2]);
//            }
//            array = nArray;
//        }
//         return array;

        for (; runs > 0; --runs)
         {
           const auto half = a.size() / 2;
           std::transform(std::cbegin(a), std::cbegin(a) + half, std::crbegin(a), std::begin(a), std::plus<int>());
           a.resize((a.size() + 1) / 2);
         }
         return a;
    }
};

#endif // KATA_H
