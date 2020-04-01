//
// Created by ivhy on 30/03/20.
//

#ifndef CS2100_SORTING_IVHYARLETH_SHELLSORT_H
#define CS2100_SORTING_IVHYARLETH_SHELLSORT_H

#include <iostream>
#include <vector>
#include "Sort.h"

using namespace std;

class Shellsort : public Sort{
public:
    Shellsort(vector<int> vec_): Sort{vec_} { }

    void sellsort(){

        for (int gap = vec.size()/2; gap > 0; gap /= 2) {
            for (int i = gap; i < vec.size(); i++) {
                int temp = vec[i];
                for (int j = i; j >= gap && vec[j-gap] > temp; j -= gap) {
                    swap(vec[j], vec[j - gap]);
                };
            };
        };
        imprimir(vec, "Shellsort");
    };
};

#endif //CS2100_SORTING_IVHYARLETH_SHELLSORT_H
